#include "bits/stdc++.h"
using namespace std;

int main(){
    string id[2];
    float gpax[2];
    char comprog[2],cal1[2],cal2[2];
    for(int i = 0 ; i < 2 ; i++){
        cin >> id[i] >> gpax[i] >> comprog[i] >> cal1[i] >> cal2[i];
        if(comprog[i]!='A' || cal1[i] > 'C' || cal2[i] > 'C') gpax[i] = -1;
    }
    if(gpax[0] != -1 && gpax[1] != -1) {
        if (gpax[0] > gpax[1]) cout << id[0];
        else if(gpax[0] < gpax[1]) cout << id[1];
        else{
            if(cal1[0]==cal1[1]){
                if(cal2[0]==cal2[1]) cout << "Both";
                else if(cal2[0]>cal2[1]) cout << id[1];
                else cout << id[0];
            }
            else if(cal1[0]>cal1[1]) cout << id[1];
            else cout << id[0];
        }
    }
    else if(gpax[0] == -1 && gpax[1] == -1) cout << "None";
    else {
        if(gpax[0] == -1) cout << id[1];
        if(gpax[1] == -1) cout << id[0];
    }
}