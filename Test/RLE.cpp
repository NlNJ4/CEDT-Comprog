#include "bits/stdc++.h"

using namespace std;

int main(){
    string s;cin>>s;
    int l = 1;
    for(int i = 1 ; i < s.size();i++){
        if(s[i]==s[i-1]) l++;
        if(s[i]!=s[i-1]){
            cout << s[i-1] << ' ' << l << ' ';
            l = 1;
        }
    }
    cout << s[s.size()-1] << ' ' << l << ' ';
}