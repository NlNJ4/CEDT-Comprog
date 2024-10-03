#include "bits/stdc++.h"

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int alphabet[26]={0};
    for(int i = 0 ; i < str.size() ; i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            str[i] = towlower(str[i]);
            alphabet[str[i]-'a']++;
        }
    }
    for(int i = 0 ; i < 26 ; i++){
        if(alphabet[i]>0){
            cout << char('a'+i) << " -> " << alphabet[i] << endl;
        }
    }
}