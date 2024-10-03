#include "bits/stdc++.h"

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int num[10]={0},cnt = 0;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]>='0'&&str[i]<='9'){
            num[str[i]-'0']++;
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        if(num[i]==0){
            cnt++;
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        if(num[i]==0){
            cout << i;
            if(cnt > 1 ){
                cout << ',';
                cnt--;
            }
            else{
                return 0;
            }
        }
    }
    cout << "None";
}