#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,val = 2;
    cin >> n;
    while(n>1){
        if(n%val == 0){
            n = n/val;
            if(n!=1) cout << val << '*' ;
            else cout << val;
        }
        else{
            val++;
        }
    }
}