#include "bits/stdc++.h"

using namespace std;

int dayinmonth(int month ,int yrs){
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
    }
    if(month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    }
    if(month == 2 && yrs%4 == 0){
        if(yrs%100 == 0){
            if(yrs%400 == 0) return 29;
            else return 28;
        }
        else return 29;
    }
    if(month == 2 && yrs%4 != 0) {
        return 28;
    }
}

int main(){
    int ds,ms,ys,de,me,ye ;
    cin >> ds >> ms >> ys >> de >> me >> ye ;
    ys = ys - 543;
    ye = ye - 543;
    int sumday = 1 ;
    for(int i = ms ; i <= 12 ; i++){
        sumday += dayinmonth(i,ys) - ds;
        ds = 0 ;
    }
    sumday += (ye-ys-1)*365;
    for(int i = 1 ; i < me ; i++){
        sumday += dayinmonth(i,ye);
    }
    sumday += de - 1;
    cout << sumday <<' '<< round(sin((2*M_PI*sumday)/23)*100)/100 << ' ' << round(sin((2*M_PI*sumday)/28)*100)/100  <<' '<< round(sin((2*M_PI*sumday)/33)*100)/100;
}