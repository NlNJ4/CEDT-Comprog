#include "bits/stdc++.h"

using namespace std;

int main(){
    float arr[4];
    float mn = 10 , mx = 0 , sum = 0;
    for(int i = 0 ; i < 4 ; i++){
        cin >> arr[i];
        if(arr[i]>mx){
            mx = arr[i]; 
        }
        if(arr[i]<mn){
            mn = arr[i]; 
        }
        sum += arr[i];
    }
    cout << round((sum-mx-mn)/2*100.0)/100.0;
}