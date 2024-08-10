#include "bits/stdc++.h"

using namespace std;

int main(){
    string exam,answer;
    int score = 0 ;
    getline(cin,exam);
    getline(cin,answer);
    if(exam.size()!=answer.size()){
        cout << "Incomplete answer";
        return 0;
    }
    for(int i = 0 ; i < exam.size() ; i++){
        if(exam[i]==answer[i]) score++;
    }
    cout << score;
}