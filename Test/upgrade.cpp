#include "bits/stdc++.h"

using namespace std;

int main(){
    map<string, int> grade_to_value = {{"A", 1}, {"B+", 2}, {"B", 3}, {"C+", 4}, {"C", 5},{"D+", 6}, {"D", 7}, {"F", 8}};
    map<int, string> value_to_grade = {{1, "A"}, {2, "B+"}, {3, "B"}, {4, "C+"}, {5, "C"},{6, "D+"}, {7, "D"}, {8, "F"}};
    string name,grade;
    vector<pair<string,int>> v;
    while(cin >> name){
        if(name=="q") break;
        cin >> grade;
        int gpa = grade_to_value[grade];
        v.push_back(make_pair(name,gpa));
    }
    cin.ignore();
    getline(cin,name);
    string person = "";
    for(int i = 0 ; i <= name.size() ; i++){
        if(name[i] == ' ' || i == name.size()){
            for(auto &val:v){
                if(person == val.first){
                    if(val.second > 1) val.second--;
                }
            }
            person = "";
        }
        else person += name[i];
    }
    for(auto val:v){
        cout << val.first << ' ' << value_to_grade[val.second] << endl;
    }
}