#include <iostream>
using namespace std;
string dec2hex(int d) {
    if(d==0) return "0";
    if(d==1) return "1";
    if(d==2) return "2";
    if(d==3) return "3";
    if(d==4) return "4";
    if(d==5) return "5";
    if(d==6) return "6";
    if(d==7) return "7";
    if(d==8) return "8";
    if(d==9) return "9";
    if(d==10) return "A";
    if(d==11) return "B";
    if(d==12) return "C";
    if(d==13) return "D";
    if(d==14) return "E";
    if(d==15) return "F";
    return dec2hex(d/16) + dec2hex(d%16);
} 
int main() {
    int d;
    while (cin >> d) {
        cout << d << " -> " << dec2hex(d) << endl;
    }
    return 0;
} 
