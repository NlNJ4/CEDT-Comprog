#include "bits/stdc++.h"

using namespace std;

int main(){
    map<string,set<string>> mp;
    string location,destination;
    while (cin>>location>>destination)
    {
        mp[location].insert(destination);
        mp[destination].insert(location);
    }
    set<string> s;
    s.insert(location);
    for(auto m : mp[location]){
        s.insert(m);
        for(auto v:mp[m]){
            s.insert(v);
        }
    }
    for(auto ans:s){
        cout << ans << endl;
    }
}