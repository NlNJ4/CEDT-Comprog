#include "bits/stdc++.h"

using namespace std;

int main(){
    int time;cin >> time;
    map<string, int> grade_to_value = {{"A", 1}, {"B+", 2}, {"B", 3}, {"C+", 4}, {"C", 5},{"D+", 6}, {"D", 7}, {"F", 8}};

    map<int, string> value_to_grade = {{1, "A"}, {2, "B+"}, {3, "B"}, {4, "C+"}, {5, "C"},{6, "D+"}, {7, "D"}, {8, "F"}};
    
    vector<pair<int,string>> student;
    for(int i = 0 ; i < time ; i++){
        string id,grade;
        cin >> id >> grade;
        student.push_back({grade_to_value[grade],id});
    }
    string code;
    while(cin >> code){
        string id = code.substr(0,code.size()-1);
        char operation = code.back();
        if(operation=='+'){
            for(auto &s:student){
                if(s.second==id){
                    if(s.first !=1)s.first--;
                }
            }
        }
        if(operation=='-'){
            for(auto &s:student){
                if(s.second==id){
                    if(s.first!=8) s.first++;
                }
            }
        }
    }
    for(int i = 1 ; i <= 8 ; i++){
        for(auto s : student) if(s.first==i)cout << s.second << ' ' << value_to_grade[s.first] << endl;
    }
}