#include "bits/stdc++.h"
using namespace std;
int main(){
    string str;
    int up = 0 , low = 0 , numeric = 0 , other = 0;
    while (getline(cin, str)) { 
        up = 0 , low = 0 , numeric = 0 , other = 0;
        if (str.empty()) { 
            break; 
        } 
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i]>='a' && str[i] <= 'z') low++;
            else if(str[i]>='A' && str[i] <= 'Z') up++;
            else if(str[i]>='0' && str[i] <= '9') numeric++;
            else{
                other++;
            }
        }
        if(str.size() >= 8 && up > 0 && low > 0 && numeric > 0){
            if(str.size() >= 12 && up > 0 && low > 0 && numeric > 0 && other > 0){
                cout << ">> strong" << endl;
            }
            else cout << ">> weak" << endl;
        }
        else cout << ">> invalid" << endl;
    }  
}