#include "bits/stdc++.h"

using namespace std;

int main(){
    while(true){
        int cnt = 0,start = -1 , stop = 0;
        string word = "";
        char special;
        string str = "";
        getline(cin,str);
        if(str=="") break;
        //cout << str.size() << endl;
        for(int i = 0 ; i < str.size();i++){
            if(isalpha(str[i])||str[i]==' '||str[i]=='-'){
                continue;
            }
            else{
                if(cnt==0) special = str[i];
                if(special==str[i]){
                    if(cnt%2==0){
                        start = i;
                    }
                    else{
                        stop = i;
                        //cout << start << ' ' << stop << endl;
                        word+=str.substr(start+1,stop-start-1);
                    }
                    cnt++;
                }
            }
        }
        cout << word << endl;
    }
}