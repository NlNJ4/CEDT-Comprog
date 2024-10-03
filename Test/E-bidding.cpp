#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;cin>>n;
    map <string,map<string,int>> mp;
    map <string,vector<string>> mppeople;
    map <string,vector<string>> mpproduct;
    for(int i = 0 ; i < n ; i++){
        char mode;cin >> mode;
        if(mode == 'B'){
            string consumer; cin >> consumer;
            string product ; cin >> product;
            int price; cin >> price;
            mp[product][consumer]=price;
            auto itr = find(mppeople[product].begin(),mppeople[product].end(),consumer);
            if(itr != mppeople[product].end()) mppeople[product].erase(itr);
            mppeople[product].push_back(consumer);
            mpproduct[consumer] ={};
        }
        if(mode == 'W'){
            string consumer; cin >> consumer;
            string product ; cin >> product;
            mp[product][consumer] = 0;
        }
    }
    for(auto m:mp){
        int mx = 0;
        for(auto val:mp[m.first]) mx = max(mx,val.second);
        if(mx==0) continue;
        else{
            for(auto people:mppeople[m.first]){
                if(mp[m.first][people] == mx){
                    mpproduct[people].push_back(m.first);
                    break;
                }
            }
        }
    }
    for(auto m:mpproduct){
        int sum = 0;
        cout << m.first << ": ";
        for(auto val:m.second){
            sum+=mp[val][m.first];
        }
        if(sum!=0){
            cout << "$" << sum << " ->";
            for(auto val:m.second) cout << ' ' << val;
            cout <<endl;
        }
        else{
            cout << "$0" << endl;
        }
    }
}