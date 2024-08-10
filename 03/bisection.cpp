#include "bits/stdc++.h"
using namespace std;

double power10(double n){
    return pow(10.0,n);
}

int main(){
    double a,l=0,u,x,result;
    cin >> a;
    u = a;
    double range = 1e-10 * max(a,1.0);
    while((u-l) > range){
        x = (u+l)/2.0;
        result = power10(x);
        if(abs(a-result) <= range){
            break;
        }
        else if(result > a){
            u = x;
        }
        else{
            l = x;
        }
    }
    cout << (l+u)/2.0;
}