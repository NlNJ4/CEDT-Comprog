#include "bits/stdc++.h"

using namespace std;

vector<string> s_all;

void combination(vector<string> &v, int n, string word){
    if (n == v.size()) {
        sort(word.begin(), word.end());
        s_all.push_back(word);
        return;
    }
    for(int j = 0 ; j < v[n].size() ; j++){
        combination(v, n + 1, word + v[n][j]);
    }  
}


int main(){
    int n; cin >> n;
    vector<string> v;
    for(int i = 0 ; i < n ; i++){
        string str; cin >> str;
        v.push_back(str);
    }
    int cnt ; cin >> cnt;
    combination(v,0,"");
    map<string,int> mp;
    int mx = 0;
    for(const auto s:s_all){
        mp[s]++;
        mx = max(mx,mp[s]);
    }
    for(int i = mx ; i > 0 ; i--){
        for(auto m:mp){
            if(m.second==i){
                cout << m.first << endl;
                cnt--;
            }
            if(cnt == 0) return 0;
        }
    }

}