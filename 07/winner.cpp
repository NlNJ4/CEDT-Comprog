#include "bits/stdc++.h"

using namespace std;

int main(){
    set<string> winner,loser;
    string s;
    while(cin>>s){
        string l;
        cin >> l;
        winner.insert(s);
        loser.insert(l);
    }
    vector<string> to_erase;
    for(auto str:winner){
        auto it = loser.find(str);
        if(it!=loser.end()){
            to_erase.push_back(str);
        }
    }
    for(auto str:to_erase){
        winner.erase(str);
    }
    if(winner.empty()) cout << "None";
    else{
        for(auto str:winner){
            cout << str << ' ';
        }
    }
}