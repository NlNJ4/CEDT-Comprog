#include "bits/stdc++.h"

using namespace std;

int main(){
    vector<string> digit,unit,special;
    digit = {"soon","neung","song","sam","si","ha","hok","chet","paet","kao"};
    unit = {"sip","roi","phan","muen","saen","lan"};
    special = {"et","yi"};
    while(true){
        string str;
        getline(cin,str);
        if(str=="q") return 0;
        string word = "";
        int sum = 0 , unitval = 0;
        for(int i = 0 ; i <= str.size() ; i++){
            if(str[i]==' ' || i == str.size()){
                auto it = find(digit.begin(),digit.end(),word);
                if(it!=digit.end()){
                    //cout << word << endl;
                    int val = it-digit.begin();
                    unitval = val;
                    word = "";
                }
                it = find(special.begin(),special.end(),word);
                if(it!=special.end()){
                    //cout << word << endl;
                    int val = it-special.begin();
                    unitval = val+1;
                    word = "";
                }
                it = find(unit.begin(),unit.end(),word);
                if(unitval == 0 && word == "sip"){
                    //cout << word << endl;
                    sum += 10;
                    word = "";
                }
                else if(it!=unit.end()){
                    //cout << word << endl;
                    int val = it-unit.begin();
                    unitval = unitval * pow(10,val+1);
                    sum+=unitval;
                    unitval = 0;
                    word = "";
                }
            }
            else word+=str[i];
        }
        cout << sum+unitval << endl ;
    }
    
}