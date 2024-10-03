#include "bits/stdc++.h"

using namespace std;

int main(){
    string name[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string nickname[10] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string str;
        cin >> str;
        for(int j = 0 ; j < 11 ; j++ ){
            if(j==10) cout << "Not found" << endl;
            else if(str==name[j]){
                cout << nickname[j] << endl;
                break;    
            }
            else if(str==nickname[j]){
                cout << name[j] << endl;
                break;
            }
        }
    }
}