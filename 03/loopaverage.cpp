#include "bits/stdc++.h"
using namespace std;
int main(){
    float n = 0 ,cnt = -1,sum=0;
    while(n!=-1){
        sum+=n;
        cin >> n;
        cnt++;
    }
    if(cnt!=0){
        cout << round((sum / cnt)*100)/100;
    }
    else{
        cout << "No Data";
    }
}