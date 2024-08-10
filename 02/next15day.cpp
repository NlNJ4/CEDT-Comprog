#include "bits/stdc++.h"
using namespace std;
int main(){
    int d,m,y,n;
    cin >> d >> m >> y;
    y-=543;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        n = 31;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) n = 30;
    else if(m==2 && y%4==0){
        if(y%100==0){
            if(y%400==0) n = 29;
            else n = 28;
        }
        else{
            n = 29;
        }
    }
    else if(m==2 && y%4!=0) n = 28;
    d+=15;
    if(d>n){
        d-=n;
        m++;
    }
    if(m>12){
        m=1;
        y++;
    }
    cout << d << '/' << m << '/' << y+543;
}
//2200