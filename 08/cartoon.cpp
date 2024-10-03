#include <bits/stdc++.h>

using namespace std;

int main(){
    string val, key;
    unordered_map<string, vector<string>> mp;
    vector<string> order; // To store the order of insertion of keys

    while (cin >> val >> key) {
        // Check if the key is already in the map
        if (mp.find(key) == mp.end()) {
            order.push_back(key); // Add the key to the order vector
        }
        mp[key].push_back(val);
    }
    
    // Iterate over the order vector to print in the order of insertion
    for (auto &k : order) {
        cout << k << ':';
        for (auto &v : mp[k]) cout << ' ' << v;
        cout << endl;
    }
}
