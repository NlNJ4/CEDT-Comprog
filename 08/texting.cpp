#include "bits/stdc++.h"

using namespace std;

int main(){
    string strtoindex[] = { " ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    string str;
    while(getline(cin,str) && str!=""){
        cout << ">> ";
        int j = 0;
        if(str.substr(0,3)=="K2T"){
            for(int i = 4 ; i < str.size() ; i++){
                if (i + 1 < str.length() && str[i] == str[i + 1]) {
                    j++;
                } else {
                    cout << strtoindex[str[i] - '0'][j]; i++;
                    j = 0;
                }
            }
        }
        else{
            str = str.substr(4, str.length() - 4);
            for_each(str.begin(), str.end(), [](char& c) {
                c = tolower(c);
                return c;
                });
            for (int i = 0; i < str.length(); i++) {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < strtoindex[j].length(); k++) {
                        if (str[i] == strtoindex[j][k]) {
                            for (int l = 0; l <= k; l++) {
                                cout << j;
                            }
                            cout << " ";
                            break;
                        }
                    }
                }
            }
        }
        cout << endl;
    } 
}