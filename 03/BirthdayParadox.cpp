#include "bits/stdc++.h"

using namespace std;

int main(){
    int k = 1 ;
    float p;
    double t = 1.0;
    cin >> p;
    while(1-t<p){
        t = t*(366-k)/365;
        if(1-t>=p) break;
        else {
            k++;
        }
    }
    cout << k;
}