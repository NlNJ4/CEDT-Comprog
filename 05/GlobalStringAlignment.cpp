#include "bits/stdc++.h"

using namespace std;

int main(){
    string x ; cin >> x;
    string y ; cin >> y;
    int pos = 0,mx = 0,step;
    for(int i = 0 ; i < x.size() ; i++){
        int cnt = 0;
        for(int j = 0 ; j < y.size() ; j++){
            if(x[i+j]==y[j]) cnt++;
        }
        if(cnt>mx){
            mx = cnt;
            pos = i;
            step = 1;
        }
    }
    for(int i = 0 ; i < y.size() ; i++){
        int cnt = 0;
        for(int j = 0 ; j < x.size() ; j++){
            if(y[i+j]==x[j]) cnt++;
        }
        if(cnt>mx){
            mx = cnt;
            pos = i;
            step = 0;
        }
    }
    if(step==0){
        for(int i = 0 ; i < pos ; i++) cout << '-';
        for(int i = 0 ; i < x.size() ;i++) cout << x[i];
        cout << endl;
        for(int i = 0 ; i < y.size() ;i++) cout << y[i];
        cout << endl;
    }
    else{
        for(int i = 0 ; i < x.size() ;i++) cout << x[i];
        cout << endl;
        for(int i = 0 ; i < pos ; i++) cout << '-';
        for(int i = 0 ; i < y.size() ;i++) cout << y[i];
        cout << endl;
    }
    cout << mx;
}