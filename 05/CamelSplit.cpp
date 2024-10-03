#include "bits/stdc++.h"

using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 0 ; i < str.size() ; i++){
        if(isupper(str[i])){
            if(i==0) cout << str[i];
            else cout << ", " << str[i];
        }
        else if(i>0){
            if((isdigit(str[i])&&isdigit(str[i-1]))||(islower(str[i])&&islower(str[i-1]))||(islower(str[i])&&isupper(str[i-1]))){
                cout << str[i];
            }
            else{
                cout << ", " << str[i];
            }
        }
        else{
            cout << str[i];
        }
    }
}