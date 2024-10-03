#include "bits/stdc++.h"

using namespace std;

int main(){
    vector<pair<int, pair<int, int>>> v;
    vector <int> n;
    int x,mx=0;
    while(cin>>x){
        n.push_back(x);
    }
    for(int i = 0 ; i < n.size() ; i++){
        int j=i;
        //cout << i << endl;
        while(n[j]==n[i]){
            j++;
            //cout << j << endl;
            if(j==n.size()) break;
        }
        v.push_back({n[i], {i, j}});
        mx = max(mx,j-i);
        i=j-1;
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < v.size();i++){
        if(v[i].second.second-v[i].second.first==mx)
            cout << v[i].first << " --> x[ " << v[i].second.first << " : " << v[i].second.second << " ] " <<endl;
    }
}
/*
0 --> x[ 7 : 8 ]
1 --> x[ 1 : 2 ]
2 --> x[ 5 : 6 ]
3 --> x[ 6 : 7 ]
4 --> x[ 0 : 1 ]
5 --> x[ 2 : 3 ]
6 --> x[ 3 : 4 ]
8 --> x[ 4 : 5 ]
*/