#include "bits/stdc++.h"

using namespace std;

vector<vector<int>> route;

void warp(map<int,set<int>> &path , vector<int> current, int now, int target){
    if(now==target){
        route.push_back(current);
        return;
    }
    else{
        for(auto r:path[now]){
            if(r > now){
                current.push_back(r);
                warp(path,current,r,target);
                current.pop_back();
            }
        }
    }
}

int main(){
    int n; cin >> n;
    int now ; cin >> now;
    int target ; cin >> target;
    map<int,set<int>> path;
    for(int i = 0 ; i < n ; i++){
        int start;cin>>start;
        int stop;cin>>stop;
        path[start].insert(stop);
    }
    vector<int> current = {now};
    warp(path,current,now,target);
    if(route.size()==0){
        cout << "no";
        return 0;
    }
    sort(route.begin(),route.end());
    for(auto way:route){
        for(int i = 0 ; i < way.size() ; i++){
            if(i!=way.size()-1) cout << way[i] << " -> ";
            else cout << way[i];
        }
        cout << endl;
    }
}