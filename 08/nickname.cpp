#include "bits/stdc++.h"

using namespace std;

int main(){
    map<string,string> mp1,mp2;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string name,nickname;
        cin >> name >> nickname;
        mp1[name] = nickname;
        mp2[nickname] = name;
    }
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string name;
        cin >> name;
        auto it = mp1.find(name);
        if(it==mp1.end()){
            auto itr = mp2.find(name);
            if(itr!=mp2.end()) cout << mp2[name] << endl;
            else cout << "Not found" << endl;
        }
        else{
            cout << mp1[name] << endl;
        }
    }
}