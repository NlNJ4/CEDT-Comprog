#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        if(i==n-1){
            for(int j = 1 ; j <= n+i ; j++){
                cout << '*';
            }
        }
        else {
            for(int j = 1 ; j <= n+i ; j++){
                if(j==n-i||j==n+i){
                    cout<< '*';
                }
                else cout << '.';
            }
        }
        cout << endl;
    }
}