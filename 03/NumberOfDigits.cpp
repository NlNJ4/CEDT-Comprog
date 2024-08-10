#include "bits/stdc++.h"

using namespace std;

long long power10(int x){
    return pow(10,x);
}

int main(){
    long long start , end , cnt=0;
    cin >> start >> end;
    int range = to_string(end).size();
    while(range>0){
        long long int val = end - power10(range-1) + 1;
        end = power10(range-1)-1;
        cnt += val * range;
        range--;
    }
    cnt += to_string(start).size();
    range = to_string(start).size();
    while(range>0){
        long long val = start - power10(range-1) + 1;
        start = power10(range-1)-1;
        cnt -= val * range;
        range--;
    }
    cout << cnt;
}