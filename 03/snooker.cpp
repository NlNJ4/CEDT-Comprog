#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        string str;
        int points = 0 ;
        bool check;
        getline(cin,str);
        vector <char> v = {};
        for(int j = 0 ; j < str.size() ; j++){
            if(str[j]!= ' ') v.push_back(str[j]);
        }
        if(v[0]!='R'){
            cout << "WRONG_INPUT" << endl;
        }
        if(v.size()==1 && v[0]=='R'){
            cout << 1 ;
            continue;
        }
        check = true;
        for(int j = 0 ; j < v.size() ; j++){
            if(v[j]=='R'&&v[j+1]=='R'){
                cout << "WRONG_INPUT" << endl;
                check = false;
                break;
            }
            else if(v[j]=='R') points+=1;
            else if(v[j]=='Y') points+=2;
            else if(v[j]=='G') points+=3;
            else if(v[j]=='N') points+=4;
            else if(v[j]=='B') points+=5;
            else if(v[j]=='P') points+=6;
            else if(v[j]=='k') points+=7;
            else{
                cout << "WRONG_INPUT" << endl;
                check = false;
                break;
            }
        }
        if(check){
            cout << points << endl;
        }
    }
}
