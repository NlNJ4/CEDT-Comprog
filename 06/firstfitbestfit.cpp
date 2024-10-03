#include "bits/stdc++.h"

using namespace std;

int sumvec(vector<int> v){
    int sum = 0;
    for(auto e:v) sum+=e;
    return sum;
}

vector<vector<int>> first(vector<int> data){
    vector<vector<int>> v;
    v.push_back({data[0]});
    for(int i = 1 ; i < data.size() ; i++){
        bool add = false;
        for(int j=0;j<v.size();j++){
            if(data[i]+sumvec(v[j])<=100){
                v[j].push_back(data[i]);
                add=true;
                break;
            }
        }
        if(!add) v.push_back({data[i]});
    }
    return v;
}

vector<vector<int>> best(vector<int> data){
    vector<vector<int>> v;
    v.push_back({data[0]});
    for(int i=1;i<data.size();i++){
        int index=0;
        int min_diff=100;
        bool added=false;
        for(int j=0;j<v.size();j++){
            int diff=100-sumvec(v[j]);
            if(diff<min_diff && diff>=data[i]){
                index=j;
                min_diff=diff;
                added=true;
            }
        }
        if(added) v[index].push_back(data[i]); 
        else v.push_back({data[i]});
    }   
    return v;
}

int main(){
    string type; cin >> type;
    int input;
    vector<int> data;
    while(cin >> input) data.push_back(input);
    vector<vector<int>> list;
    if(type=="first") list = first(data);
    if(type=="best") list = best(data);

    for(auto &v:list) sort(v.begin(),v.end());
    for(auto &v:list) v.insert(v.begin(),-sumvec(v));
    for(auto &v:list) v.insert(++v.begin(),v.size());
    sort(list.begin(),list.end());
    
    for(auto v:list){
        for(int i=2;i<v.size();i++) cout<<v[i]<<' ';
        cout<<endl;
    }
}