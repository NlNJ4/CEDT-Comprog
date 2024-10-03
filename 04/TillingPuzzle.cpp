#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,row0,col0;
    cin >> n;
    int num[n][n];
    vector <int> v;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> num[i][j];
            if(num[i][j]!=0) v.push_back(num[i][j]);
            else{
                row0 = i;
                col0 = j;
            }
        }
    }
    int repeated = 0;
    for(int i = 0 ; i < v.size()-1 ; i++){
        for(int j = i+1 ; j < v.size() ; j++){
            if(v[j]>v[i]) repeated++;
        }
    }
    if(n%2==1){
        if(repeated%2==0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        if(repeated%2==0){
            if(row0%2==0) cout << "YES";
            else cout << "NO";
        }
        else{
            if(row0%2==1) cout << "YES";
            else cout << "NO";
        }
    }
}