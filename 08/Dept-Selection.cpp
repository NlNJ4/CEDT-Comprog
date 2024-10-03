#include "bits/stdc++.h"

using namespace std;

int main(){
    map<string,int> major;
    int n;cin>>n;
    for(int i = 0 ; i < n ; i++){
        string subject;cin >> subject;
        int cnt;cin>>cnt;
        major[subject] = cnt;
    }
    int m ; cin >> m;
    map<pair<double,string>,vector<string>> data;
    for(int i = 0 ; i < m ; i++){
        string id; cin >> id;
        double score; cin >> score;
        vector<string> v;
        for(int j = 0 ; j < 4 ; j++){
            string subject;cin>>subject;
            v.push_back(subject);
        }
        data[make_pair(-score,id)] = v;
    }
    map<string,string> selected;
    for(auto kv:data){
        vector<string> v=kv.second;
        for(int i = 0 ; i < 4 ; i++){
            if(major[v[i]]>0){
                selected[kv.first.second]=v[i];
                major[v[i]]--;
                break;
            }
        }
    }
    for(auto kv:selected){
        cout << kv.first << ' ' << kv.second << endl;
    }
}