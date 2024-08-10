#include "bits/stdc++.h"

using namespace std;

int main(){
    double n ;
    cin >> n;
    if(n>=1000000000){
        if (n/1000000000  >= 10) cout << round((n/1000000000)) << "B";
        else cout << round(n/100000000)/10 << "B";
    }
    else if(n >= 1000000){
        if (n/1000000  >= 10) cout << round((n/1000000)) << "M";
        else cout << round((n/100000))/10 << "M";
    }
    else if(n >= 1000){
        if (n/1000 >= 10) cout << round(n/1000) << "K";
        else cout << round(n/100)/10 << "K";
    }
    else cout << n;
}