#include "bits/stdc++.h"

using namespace std;

int main(){
    vector<char> bingo;
    string table[5][5];
    bool check[5][5] = {false};
    for(int i = 0 ; i < 5 ; i++){
        char c;
        cin >> c;
        bingo.push_back(c);
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> table[i][j];
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            check[i][j] = false;
        }
    }
    check[2][2] = true;
    int val = 0;
    string str;
    while(cin >> str){
        val++;
        char c = str[0];
        string s = str.substr(1,str.size()-1);
        auto it = find(bingo.begin(),bingo.end(),c);
        if(it==bingo.end()) continue;
        int index = it - bingo.begin();
        for(int i = 0 ; i < 5 ; i++){
            if(table[i][index]==s){
                check[i][index] = true;
                int cnt = 0 ;
                bool checkmate = false;
                for(int j = 0 ; j < 5 ; j++){
                    if(check[j][index]) cnt++;
                }
                if(cnt==5){
                    for(int j = 1 ; j < 5 ; j++){
                        if(index == 2 && j == 2) continue;
                    }
                    checkmate = true;
                }
                cnt = 0;
                for(int j = 0 ; j < 5 ; j++){
                    if(check[i][j]) cnt++;
                }
                if(cnt==5){
                    for(int j = 1 ; j < 5 ; j++){
                        if(i == 2 && j == 2) continue;
                    }
                    checkmate = true;
                }
                cnt = 0;
                for(int j = 0 ; j < 5 ; j++){
                    if(check[j][j]) cnt++;
                }
                if(cnt==5){
                    for(int j = 1 ; j < 5 ; j++){
                        if(j==2) continue;
                    }
                    checkmate = true;
                }            
                cnt = 0;
                for(int j = 0 ; j < 5 ; j++){
                    if(check[j][4-j]) cnt++;
                }
                if(cnt==5){
                    for(int j = 1 ; j < 5 ; j++){
                        if(j==2) continue;
                    }
                    checkmate = true;
                }
                if(checkmate){
                    cout << val << endl;
                    int cnt = 0 ;
                    bool checkmate = false;
                    for(int j = 0 ; j < 5 ; j++){
                        if(check[i][j]) cnt++;
                    }
                    if(cnt==5){
                        cout << bingo[0] << table[i][0];
                        for(int j = 1 ; j < 5 ; j++){
                            if(i == 2 && j == 2) continue;
                            cout << ", " << bingo[j] << table[i][j];
                        }
                        cout << endl;
                        checkmate = true;
                    }
                    cnt = 0;
                    for(int j = 0 ; j < 5 ; j++){
                        if(check[j][index]) cnt++;
                    }
                    if(cnt==5){
                        cout << bingo[index] << table[0][index];
                        for(int j = 1 ; j < 5 ; j++){
                            if(index == 2 && j == 2) continue;
                            cout << ", " << bingo[index] << table[j][index];
                        }
                        cout << endl;
                        checkmate = true;
                    }
                    cnt = 0;
                    for(int j = 0 ; j < 5 ; j++){
                        if(check[j][j]) cnt++;
                    }
                    if(cnt==5){
                        cout << bingo[0] << table[0][0];
                        for(int j = 1 ; j < 5 ; j++){
                            if(j==2) continue;
                            cout << ", " << bingo[j] << table[j][j];
                        }
                        cout << endl;
                        checkmate = true;
                    }          
                    cnt = 0;
                    for(int j = 0 ; j < 5 ; j++){
                        if(check[j][4-j]) cnt++;
                    }
                    if(cnt==5){
                        cout << bingo[0] << table[4][0];
                        for(int j = 1 ; j < 5 ; j++){
                            if(j==2) continue;
                            cout << ", " << bingo[j] << table[4-j][j];
                        }
                        cout << endl;
                        checkmate = true;
                    }
                    return 0;
                }
            }
        }
    }
}