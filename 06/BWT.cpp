#include "bits/stdc++.h"

using namespace std;

int main(){
    string str;
    cin >> str;
    str+='$';
    vector<string> v;
    v.push_back(str);
    for(int i = 1 ; i < str.size() ; i++){
        string txt = "";
        for(int j = i ; j < str.size() ; j++){
            txt+=str[j];
        }
        for(int j = 0 ; j < i ; j++){
            txt+=str[j];
        }
        v.push_back(txt);
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i][str.size()-1];
    }
}