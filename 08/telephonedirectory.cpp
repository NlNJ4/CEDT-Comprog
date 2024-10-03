#include "bits/stdc++.h"

using namespace std;

int main(){
    map<string,string> mp1,mp2;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        string str;
        getline(cin,str);
        size_t pos = str.find_last_of(' ');
        string name = str.substr(0,pos);
        string number = str.substr(pos+1,str.size()-pos-1);
        mp1[name] = number;
        mp2[number] = name;
    }
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        string name;
        getline(cin,name);
        auto it = mp1.find(name);
        if(it==mp1.end()){
            auto itr = mp2.find(name);
            if(itr!=mp2.end()) cout << name << " --> " << mp2[name] << endl;
            else cout << name << " --> " << "Not found" << endl;
        }
        else{
            cout << name << " --> " <<mp1[name] << endl;
        }
    }
}