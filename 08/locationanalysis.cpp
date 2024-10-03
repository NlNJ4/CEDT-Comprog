#include "bits/stdc++.h"

using namespace std;

int main(){
    map<string,vector<string>> mp;
    vector<string> v;
    int n; cin>>n;
    for(int i = 0 ; i < n ; i++){
        string id; cin >> id;
        v.push_back(id);
        string direction;
        while(cin>>direction){
            if(direction == "*") break;
            else mp[id].push_back(direction);
        }
    }
    string checkid;cin >> checkid;
    bool check = true;
    for(auto id : v){
        if(id == checkid) continue;
        for(auto des:mp[checkid]){
            auto it = find(mp[id].begin(),mp[id].end(),des);
            if(it!=mp[id].end()){
                cout << ">> " << id << endl;
                check = false;
                break;
            } 
        }
    }
    if(check){
        cout << ">> Not Found";
    }
}