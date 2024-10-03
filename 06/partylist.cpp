#include "bits/stdc++.h"

using namespace std;

int main(){
    vector<pair<string,float>> vote;
    string str;
    float vt,party=0,percentage;
    int sum = 0;
    while(cin >> str){
        if(str=="END") break;
        cin >> vt;
        vote.push_back({str,vt});
        sum+=vt;
    }
    vector<pair<double,pair<string,int>>> percent;
    for(auto v:vote){
        percentage = v.second/sum*100;
        percent.push_back({percentage,{v.first,v.second}});
    }
    /*for(auto v:percent){
        cout << v.first << ' ' << v.second.first << ' ' << v.second.second << endl;
    }*/
    sort(percent.rbegin(),percent.rend());
    vector<pair<int,pair<string,int>>> partylist;
    for(int i = 0 ; i < percent.size() ; i++){
        int number = percent[i].first;
        percent[i].first = percent[i].first-number;
        partylist.push_back({number,{percent[i].second.first,percent[i].second.second}});
        party+=number;
    }
    sort(percent.rbegin(),percent.rend());
    for(auto per:percent){
        if(party==100) break;
        for(int i = 0 ; i < partylist.size() ; i++){
            if(per.second.first==partylist[i].second.first) {
                partylist[i].first++;
                party++;
            }
        }
    }
    sort(percent.rbegin(),percent.rend());
    /*for(auto v:percent){
        cout << v.first << ' ' << v.second.first << ' ' << v.second.second << endl;
    }*/
    for(auto v : partylist){
        if(v.first>0) cout << v.second.first << ' ' << v.first << ' ' << v.second.second << endl;
    }
}