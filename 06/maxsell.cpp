#include "bits/stdc++.h"

using namespace std;

int main(){
    vector<pair<float,pair<string,float>>> v;
    string str;
    float price;
    bool check = false;
    while(cin >> str){
        if(str=="END") break;
        cin >> price;
        v.push_back({0,{str,price}});
    }
    while(cin >> str){
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i].second.first == str){
                v[i].first += v[i].second.second;
                check = true;
            }
        }
    }
    sort(v.rbegin(),v.rend());
    if(check == false) {
        cout << "No Sales" ;
        return 0;
    }
    for(int i = 0 ; i < 3 ; i++){
        auto val = v[i];
        if(val.first > 0 ){
            cout << val.second.first << ' ' << val.first << endl;
        }
    }
}