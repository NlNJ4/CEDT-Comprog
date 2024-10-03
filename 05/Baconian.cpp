#include "bits/stdc++.h"

using namespace std;

void D(string s,vector<string> check){
    string loopstring = "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]>='A'&&s[i]<='Z') loopstring+="U";
        else if(s[i]>='a'&&s[i]<='z') loopstring+="L";
        if(loopstring.size() == 4){
            auto it = find(check.begin(),check.end(),loopstring);
            if(it != check.end()){
                int index = it - check.begin();
                if(index == 10)cout << '-';
                else if(index == 11) cout << ',';
                else cout << index;
            }
            loopstring = "";
        }       
    }
}

void E(string s,string text,vector<string> check){
    string alltext = "";
    for(int i = 0 ; i < s.size() ; i++){
        int index;
        if(s[i]=='-') index = 10;
        else if(s[i]==',') index = 11;
        else index = s[i]-'0';
        string loopstring = check[index];
        alltext += loopstring;
    }
    int index = 0 ;
    for(int i = 0 ; i < alltext.size() ; i++){
        if(!((text[index]>='A' && text[index]<='Z') || (text[index]>='a' && text[index]<='z'))){
            cout << text[index];
            i--;
            index++;
            if(index==text.size()){
                index = 0;
            }
        }
        else{
            if(alltext[i]=='U'){
                char x = toupper(text[index]);
                cout << x;
            }
            else if(alltext[i]=='L'){
                char x = tolower(text[index]);
                cout << x;
            }
            index++;
            if(index==text.size()){
                index = 0;
            }
        }
    }
}

int main(){
    string txt,str;
    cin >> txt;
    vector<pair<char,string>> v;
    char command;
    vector <string> check;
    check = {"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
    while(cin >> command){
        cin.ignore();
        getline(cin,str);
        v.push_back({command,str});
    }
    for(auto val : v){
        if(val.first=='D'){
            D(val.second,check);
        }
        else{
            E(val.second,txt,check);
        }
        cout << endl;
    }
    
}