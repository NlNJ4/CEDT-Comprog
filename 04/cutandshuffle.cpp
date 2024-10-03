#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> card1,card2;
    for(int i = 0 ; i < n ; i++) {
        string  s;
        cin >> s;
        card1.push_back(s);
    }
    cin.ignore();
    string str;
    getline(cin,str);
    for(char c : str){
        card2 = {};
        if(c=='C'){
            for(int i = n/2 ; i < n ;i++){
                card2.push_back(card1[i]);
            }
            for(int i = 0 ; i < n/2 ;i++){
                card2.push_back(card1[i]);
            }
        }
        else if(c=='S'){
            for(int i = 0 ; i < n/2 ;i++){
                card2.push_back(card1[i]);
                card2.push_back(card1[n/2+i]);
            }
        }
        else continue;
        card1 = card2;
    }
    for(auto c : card1) cout << c << ' ';
}