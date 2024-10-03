#include "bits/stdc++.h"

using namespace std;

set<string> anagram(vector<char> input){
    set<string> s;
    if(input.size()==1) s = {string(1,input[0])};
    for(auto c:input){
        vector<char> new_input(input);
        auto itr = find(new_input.begin(),new_input.end(),c);
        new_input.erase(itr);
        set<string> prv_ana = anagram(new_input);
        for(auto str:prv_ana){
            s.insert(c+str);
        }
    }
    return s;
}

int main(){
    string s; cin >> s;
    vector<char> input;
    for(auto c:s) input.push_back(c);
    set<string> v = anagram(input);
    for(auto str:v) cout<<str<<' ';
}