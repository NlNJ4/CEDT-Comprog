#include "bits/stdc++.h"

using namespace std;

int main(){
    string str;
    cin >> str;
    int n,tod=0;
    cin >> n;
    for(int i = str.size() ; i >= 0 ; i--){
        if(isupper(str[i])){
            str[i]+=n%26+tod;
            if(!isupper(str[i])){
                str[i]-=26;
                tod = 1;
            }
            else{
                tod = 0;
            }
            n/=26;
        }
        else if(isdigit(str[i])){
            str[i]+=n%10+tod;
            if(!isdigit(str[i])){
                str[i]-=10;
                tod = 1;
            }
            else{
                tod = 0;
            }
            n/=10;
        }
    }
    if(tod>0) cout << tod ;
    for(int i = 0 ; i < str.size() ; i++){
        cout << str[i];
    }
}