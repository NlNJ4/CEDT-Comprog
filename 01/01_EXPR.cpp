#include <bits/stdc++.h>    
using namespace std;

int fac(int i){
    if(i == 2) return 2;
    else if(i == 1) return 1;
    else return fac(i-1)*i;
}

int main(){
    cout << ( M_PI - fac(10)/pow(8,8) + pow(log(9.7),7/sqrt(71)-sin(40*M_PI/180)))/pow(1.2,cbrt(2.3)) ;
}