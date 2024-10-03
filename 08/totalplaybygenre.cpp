#include "bits/stdc++.h"

using namespace std;

int main(){
    string str;
    map<string,vector<pair<int,int>>> mp;
    while(getline(cin,str)){
        auto last = str.find_last_of(' ');
        string time = str.substr(last+1,str.size()-last);
        //cout << time << endl;
        str = str.substr(0,last);
        auto type = str.find_last_of(' ');
        string genre = str.substr(type+1,str.size()-type);
        //cout << genre << endl;
        auto at = time.find(':');
        int minute = stoi(time.substr(0,at)), second = stoi(time.substr(at+1,time.size()-at));
        mp[genre].push_back(make_pair(minute,second));
    }
    vector<pair<pair<int,int>,string>> v;
    for(auto m : mp){
        int minute = 0 , seconds = 0 ;
        for(auto val:m.second){
            minute += val.first;
            seconds += val.second;
        }
        minute += seconds/60;
        seconds%=60;
        v.push_back({{minute,seconds},m.first});
    }
    sort(v.rbegin(),v.rend());
    int end = 0;
    for(auto val : v){
        cout << val.second << " --> " << val.first.first << ':' << val.first.second << endl;
        end++;
        if(end==3) return 0;
    }
}