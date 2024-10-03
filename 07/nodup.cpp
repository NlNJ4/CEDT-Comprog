#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,index=0;
    set <int> s;
    while(cin>>n){
        index++;
        auto it = s.find(n);
        if(it!=s.end()){
            cout << index;
            return 0;
        }
        else{
            s.insert(n);
        }
    }
    cout << -1;
}