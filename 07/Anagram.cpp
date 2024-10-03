#include "bits/stdc++.h"

using namespace std;

int main(){
    multiset <char> s1,s2;
    string str;
    getline(cin,str);
    for(int i = 0 ; i < str.size()  ; i++){
        if(str[i]!=' ') s1.insert(tolower(str[i]));
    }
    getline(cin,str);
    for(int i = 0 ; i < str.size()  ; i++){
        if(str[i]!=' ') s2.insert(tolower(str[i]));
    }
    if(s1==s2)cout << "YES";
    else cout << "NO";
}