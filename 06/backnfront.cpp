#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        if(cnt==0){
            v.push_back(val);
        }
        else{
            v.insert(v.begin(),val);
        }
        cnt = 1-cnt;
    }
    string str;
    getline(cin,str);
    string word;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]==' '){
            if(cnt==0){
            v.push_back(stoi(word));
            }
            else{
                v.insert(v.begin(),stoi(word));
            }
            cnt = 1-cnt;
            word = "";
        }
        else{
            word+=str[i];
        }
        if(i==str.size()-1){
            if(cnt==0){
            v.push_back(stoi(word));
            }
            else{
                v.insert(v.begin(),stoi(word));
            }
            cnt = 1-cnt;
            word = "";
        }
    }
    while(true){
        int n;
        cin >> n;
        if(n==-1) break;
        if(cnt==0){
            v.push_back(n);
            }
        else{
            v.insert(v.begin(),n);
        }
        cnt = 1-cnt;
    }
    cout<<'[';
    for(int i = 0 ; i < v.size() ; i++){
        if(i!=v.size()-1){
            cout << v[i] << ", ";
        }
        else cout << v[i] << ']';
    }
}