#include "bits/stdc++.h"

using namespace std;

set<int> un(set<int> ff,set<int> ss){
    for(auto s:ss){
        ff.insert(s);
    }
    return ff;
}
set<int> intersection(set<int> ff,set<int> ss){
    set<int> inter;
    for(auto f:ff){
        for(auto s:ss){
            if(f==s){
                inter.insert(s);
                continue;
            }
        }
    }
    return inter;
}
set<int> mi(set<int> ff,set<int> ss){
    set<int> m;
    for(auto f:ff){
        bool add = true;
        for(auto s:ss){
            if(f==s){
                add = false;
                continue;
            }
        }
        if(add) m.insert(f);
    }
    return m;
}


int main(){
    set<int> base,a,b,c,compare;
    string str;
    getline(cin,str);
    string word = "";
    for(int i = 0 ; i <= str.size(); i++){
        if(str[i]==' '||i==str.size()){
            base.insert(stoi(word));
            word = "";
        }
        else word+=str[i];
    }
    a = base; b = base; c = base;
    while(getline(cin,str) && !str.empty()){
        compare.clear();
        for(int i = 0 ; i <= str.size(); i++){
            if(str[i]==' '||i==str.size()){
                compare.insert(stoi(word));
                word = "";
            }
            else word+=str[i];
        }
        a = un(a,compare);
        b = intersection(b,compare);
        c = mi(c,compare);
    }
    cout << "U:";
    if(a.size()==0) cout <<" empty set" << endl;
    else{
        for(auto val:a) cout << ' ' << val;
        cout << endl;
    }
    cout << "I:";
    if(b.size()==0) cout <<" empty set" << endl;
    else{
        for(auto val:b) cout << ' ' << val;
        cout << endl;
    }
    cout << "D:";
    if(c.size()==0) cout <<" empty set" << endl;
    else{
        for(auto val:c) cout << ' ' << val;
        cout << endl;
    }
}