#include "bits/stdc++.h"

using namespace std;

int main(){
    map <string,double> mp;
    mp["THB"] = 1;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string currency;
        double val;
        cin >> currency >> val;
        mp[currency] = val;
    }
    double money;
    cin >> money;
    vector<string> v;
    string currency;
    while(cin >> currency) v.push_back(currency);
    cout << fixed << setprecision(0);
    cout << money << ' ' << v[0];
    for(int i = 1 ; i < v.size() ; i++){
        cout << " -> " << floor(money*(mp[v[i-1]]/mp[v[i]])) << ' ' << v[i];
        money = floor(money*(mp[v[i-1]]/mp[v[i]]));
    }
}