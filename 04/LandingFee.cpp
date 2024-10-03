#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair<string,int>> price;
    for(int i = 0 ; i < n ; i++){
        string str;
        cin >> str;
        int val;
        cin >> val;
        price.push_back(make_pair(str,val));
    }
    cin.ignore();
    string station;
    getline(cin,station);
    vector <string> country;
    for(int i = 0 ; i < station.size() ; i++){
        if(station[i]=='-'){;
            country.push_back(station.substr(i+1,2));
        }
    }
    int val = 0 ;
    for(int i = 1 ; i < country.size() ; i++){
        if(country[i]!=country[i-1]){
            for(int j = 0 ; j < n ; j++){
                if(price[j].first==country[i]){
                    val+=price[j].second;
                }
            }
        }
    }
    cout << val;
}