#include "bits/stdc++.h"

using namespace std;

int main(){
    set <int> s;
    int n; cin >> n;
    int val,sum=0;
    while(cin >> val){
        sum += s.count(n-val);
        s.insert(val);
    }
    cout << sum;
}