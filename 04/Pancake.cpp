#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    int pancake[n];
    int all = n;
    for(int i = 0 ; i < n ; i++){
        cin >> pancake[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout << pancake[i] << ' ';
    }
    cout << endl;
    while(n>1){
        int mx = -INT_MAX;
        int set = n;
        int pancake2[n] = {};
        for(int i = n-1 ; i >= 0 ; i--){
            if(mx <  pancake[i]){
                set = i;
                mx = pancake[i];
            }
        }
        if(set==n-1){
            n--;
            continue;
        }
        else if(set!=0){
            pancake2[0] = pancake[set];
            for(int i = 1 ; i <= set ; i++){
                pancake2[i] = pancake[set-i];
            }
            for(int i = 0 ; i <= set ; i++){
                pancake[i] = pancake2[i];
            }
        }
        else if(set==0){
            pancake2[n-1] = pancake[0];
            for(int i = 0 ; i < n-1 ; i++){
                pancake2[i] = pancake[n-i-1];
            }
            for(int i = 0 ; i < n ; i++){
                pancake[i] = pancake2[i];
            }
        }
        for(int i = 0 ; i < all ; i++){
            cout << pancake[i] << ' ' ;
        }
        cout << endl;
    }
}