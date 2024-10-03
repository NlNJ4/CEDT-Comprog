#include "bits/stdc++.h"

using namespace std;

string txt = "no";

void warp(map<int,vector<int>> &mp,vector<int> des, int target){
    for(auto now:des){
        if(now!=target) warp(mp,mp[now],target);
        else txt = "yes";
    }
}

int main(){
    int n;cin >> n;
    int now;cin >> now;
    int target;cin >> target;
    map<int,vector<int>> mp;
    for(int i = 0 ; i < n ; i++){
        int start;cin >> start;
        int stop;cin >> stop;
        mp[start].push_back(stop);
    }
    warp(mp,mp[now],target);
    cout << txt;
}