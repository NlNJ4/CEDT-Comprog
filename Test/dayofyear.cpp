#include "bits/stdc++.h"

using namespace std;

int main(){
    int day,month,year,sum=0;
    cin >> day >> month >> year;
    year-=543;
    for(int i = 1 ; i < month ; i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            sum+=31;
        }
        else if(i==2){
            sum+= ((year%400==0) || ((year%4==0) && (year % 100!=0))) ? 29 : 28;
        }
        else sum+=30;
    }
    sum+=day;
    cout << sum;
}