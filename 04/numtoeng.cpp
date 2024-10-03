#include "bits/stdc++.h"

using namespace std;

string tendigit(int n){
    if(n==19) return "nineteen";
    if(n==18) return "eighteen";
    if(n==17) return "seventeen";
    if(n==16) return "sixteen";
    if(n==15) return "fifteen";
    if(n==14) return "fourteen";
    if(n==13) return "thirteen";
    if(n==12) return "twelve";
    if(n==11) return "eleven";
    if(n==9) return "ninety";
    if(n==8) return "eighty";
    if(n==7) return "seventy";
    if(n==6) return "sixty";
    if(n==5) return "fifty";
    if(n==4) return "forty";
    if(n==3) return "thirty";
    if(n==2) return "twenty";
    if(n==1) return "ten";
}
string digit(int n){
    if(n==9) return "nine";
    if(n==8) return "eight";
    if(n==7) return "seven";
    if(n==6) return "six";
    if(n==5) return "five";
    if(n==4) return "four";
    if(n==3) return "three";
    if(n==2) return "two";
    if(n==1) return "one";
}

void loopprint(int n){
    if(n>99){
        cout << digit(n/100) << " hundred ";
        n = n%100;
    }
    if(n>10&&n<20){
        cout << tendigit(n) << ' ';
        n = 0;
    }
    if(n>9){
        cout << tendigit(n/10) << ' ';
        n = n%10;
    }
    if(n>0){
        cout << digit(n) << ' ';
    }
}

int main(){
    long long n;
    cin >> n;
    if(n==0){
        cout << "zero";
        return 0;
    }
    if(n>=1000000000000){
        loopprint(n/1000000000000);
        cout << "trillion ";
        n = n%1000000000000;
    }
    if(n>=1000000000){
        loopprint(n/1000000000);
        cout << "billion ";
        n = n%1000000000;
    }
    if(n>=1000000){
        loopprint(n/1000000);
        cout << "million ";
        n = n%1000000;
    }
    if(n>=1000){
        loopprint(n/1000);
        cout << "thousand ";
        n = n%1000;
    }
    loopprint(n);
}