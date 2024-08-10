#include <bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin >> x;
    cout <<  round(pow(x,sqrt(log(pow(x+1,2))))/(10-x)*1e6)/1e6;
}