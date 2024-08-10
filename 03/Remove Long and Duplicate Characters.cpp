#include "bits/stdc++.h"
using namespace std;
int main(){
    string t;
    int k;
    cin >> t >> k;
    for(int i = 0 ; i < t.size() ; i++){
        int j = i+1;
        while(t[j]==t[i]){
            j++;
        }
        if(j-i>=k) i = j-1;
        else cout << t[i] ;
    }
}