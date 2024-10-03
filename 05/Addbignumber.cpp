#include "bits/stdc++.h"

using namespace std;

int main(){
    vector <string> num;
    int mx = 0;
    while(true){
        string n;
        cin >> n;
        if(n=="END") break;
        if(mx<n.size()){
            mx = n.size();
        }
        num.push_back(n);
    }
    for(int i = 0 ; i < num.size() ; i++){
        string newnum = "";
        string n = num[i];
        for(int j = 0 ; j < mx-n.size(); j++){
            newnum+='0';
        }
        newnum+=n;
        num[i]=newnum;
    }
    int val,tod=0;
    int out[mx]={};
    for(int i = mx-1 ; i >= 0 ; i--){
        val=0;
        for(int j = 0 ; j < num.size();j++){
            char n = num[j][i];
            val+=n-'0';
        }
        val+=tod;
        tod=val/10;
        val = val%10;
        out[i] = val;
    }
    if(tod!=0) cout << tod;
    for(int i = 0 ; i < mx ; i++){
        cout << out[i];
    }
}