#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,cnt = 1;
    cin >> n;
    vector <int> v;
    while(n>1){
        if(n%2==0){
            v.push_back(n);
            n = n/2;
        }
        else{
            v.push_back(n);
            n = n*3+1;
        }
    }
    if(v.size()>=14){
        for(int i = v.size()-14 ; i <= v.size() ; i++){
            if(i==v.size()) cout << 1;
            else cout << v[i] << "->";
        }
    }
    else{
        for(int i = 0 ; i <= v.size() ; i++){
            if(i==v.size()) cout << 1;
            else cout << v[i] << "->";
        }
    }
}