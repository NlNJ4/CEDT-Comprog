#include "bits/stdc++.h"

using namespace std;

int main(){
    int k,m,n;cin >> k >> n >> m;
    int arr[n] = {0};
    for(int i = 0 ; i < m ; i++){
        int day,val ; cin >> day >> val;
        arr[day-1] = val;
    }
    map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        int valfirst,valend,mx = 0;
        if(i-k < 0) valfirst = 0;
        else valfirst = i-k;
        if(i+k>=n) valend = n-1;
        else valend = i+k;
        for(valfirst ; valfirst<=valend;valfirst++){
            if(arr[valfirst]!=0){
                mp[arr[valfirst]]++;
                mx = max(mx,mp[arr[valfirst]]);
            }
        }
        if(mp.empty()||mx==0) cout << "X ";
        else{
            for(auto m:mp){
                if(m.second==mx){
                    cout << m.first << ' ';
                    break;
                }
            }
        }
        mp.clear();
    }
}