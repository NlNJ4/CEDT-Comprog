#include "bits/stdc++.h"

using namespace std;

int main(){
    string line ;
    getline(cin,line);
    string word;
    vector<int> unique,unique2;
    word = "";
    for(int i = 0 ; i < line.size();i++){
        if(line[i]!=' '){
            word+=line[i];
        }
        else{
            if(word=="") continue;
            else{
                unique.push_back(stoi(word));
                word="";
            }
        }
        if(i==line.size()-1){
            if(word=="") continue;
            else{
                unique.push_back(stoi(word));
                word="";
            }
        }
    }
    sort(unique.begin(),unique.end());
    unique2.push_back(unique[0]);
    for(int i = 1 ; i < unique.size() ; i++){
        if(unique[i]!=unique[i-1]){
            if(unique[i]!=unique2[unique2.size()-1]) unique2.push_back(unique[i]);
        }
    }
    cout << unique2.size() << endl;
    for(int i = 0 ; i < 10 ; i++){
        if(i==unique2.size()) break;
        else cout << unique2[i] << ' ';
    }
}