#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string,vector<string>> mp;
    for(int i = 0 ; i < n ; i++){
        string str;
        getline(cin,str);
        auto it = str.find(',');
        string song = str.substr(0,it);
        string singer = str.substr(it+2,str.size());
        mp[song].push_back(singer);
    }
    string str;
    getline(cin,str);
    bool checkend = false;
    while(true){
        vector<string> v;
        string s;
        auto it = str.find_first_of(',');
        if(it!=string::npos){
            s = str.substr(0,it);
            str = str.substr(it+2,str.size());
            for(auto st:mp[s]) v.push_back(st);
        }
        else{
            for(auto st:mp[str]) v.push_back(st);
            s = str;
            checkend = true;
        }
        if(v.size()==0){cout << s << " -> " << "Not found" << endl;}
        else{
            cout << s << " -> " << v[0];
            for(int i = 1 ; i < v.size() ; i++){
                cout << ", " << v[i];
            }
            cout << endl;
        }
        if(checkend) return 0;
    }
}