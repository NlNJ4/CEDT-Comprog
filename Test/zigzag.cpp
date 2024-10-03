#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;cin>>n;
    int minx = INT_MAX, miny= INT_MAX, maxx = -INT_MAX, maxy=-INT_MAX;
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        int y;cin>>y;
        if(i%2==0){
            minx = min(x,minx);
            maxy = max(y,maxy);
            miny = min(y,miny);
            maxx = max(x,maxx);
        }
        else{
            minx = min(y,minx);
            maxy = max(x,maxy);
            miny = min(x,miny);
            maxx = max(y,maxx);
        }
        //cout << maxx << ' ' <<miny <<endl;
    }
    string word;cin >> word;
    if(word == "Zig-Zag"){
        cout << minx << ' ' << maxy;
    }
    else cout << miny << ' ' << maxx;
}