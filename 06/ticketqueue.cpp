#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,ticket,ticketnow,ticketcall;
    cin >> n;
    vector<pair<int,pair<int,int>>> v;
    for(int i = 0 ; i < n ; i++){
        string str;
        cin >> str;
        if(str=="reset"){
            cin >> ticket;
            ticketnow = ticket;
            ticketcall = ticket;
        }
        if(str=="new"){
            int time;
            cin >> time;
            v.push_back({ticketnow,{time,0}});
            cout << ">> ticket " << ticketnow << endl; 
            ticketnow++;
        }
        if(str=="next"){
            cout << ">> call " << ticketcall << endl;
            ticketcall++;
        }
        if(str=="order"){
            ticket = ticketcall-1;
            int time;
            cin >> time;
            for(int j = 0 ; j < v.size() ; j++){
                if(ticket==v[j].first){
                    v[j].second.second=time;
                    cout << ">> qtime "<< ticket << ' ' << v[j].second.second-v[j].second.first  << endl;
                    break;
                }
            }
            ticket++;
            ticketcall = ticket;
        }
        if(str=="avg_qtime"){
            float sum = 0;
            int index = 0;
            for(int j = 0 ; j < v.size() ; j++){
                if(v[j].second.second!=0){
                    sum += v[j].second.second-v[j].second.first;
                    index++;
                }
            }
            cout << ">> avg_qtime " << sum/index << endl;
        }
    }
}