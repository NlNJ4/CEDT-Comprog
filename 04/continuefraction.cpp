#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    double data[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> data[i];
    }
    for(int i = 0 ; i < n ; i++){
        double k = 0 ;
        int cnt = i ;
        while(cnt>=0){
            if(k==0){
                k = data[cnt];
            }
            else{
                k = data[cnt] + 1/k;
            }
            cnt-- ;
        }
        cout << setprecision(10) << k << endl;
    }
}