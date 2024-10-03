#include "bits/stdc++.h"

using namespace std;

int main(){
    vector <string> v;
    string str;
    getline(cin,str);
    string word = "";
    int cnt=0,indexfirst=-1,indexlast = -1;
    
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]==' '){
            v.push_back(word);
            word = "";
        }
        else word+=str[i];
        if(i==str.size()-1){
            v.push_back(word);
            word = "";
        }
    }
    for(int i = 0; i < v[0].size(); i++){
        if(v[0][i]=='a'||v[0][i]=='e'||v[0][i]=='i'||v[0][i]=='o'||v[0][i]=='u'){
            indexfirst = i;
            break;
        }
    }
    for(int i = 0; i < v[v.size()-1].size(); i++){
        if(v[v.size()-1][i]=='a'||v[v.size()-1][i]=='e'||v[v.size()-1][i]=='i'||v[v.size()-1][i]=='o'||v[v.size()-1][i]=='u'){
            indexlast = i;
            break;
        }
    }
    //cout << indexfirst << ' ' << indexlast << /*v[v.size()-1] <<*/ ' '<< v.size() << endl;
    cout << v[0].substr(0,indexfirst) << v[v.size()-1].substr(indexlast) << ' ';
    for(int i = 1 ; i < v.size()-1 ; i++){
        cout << v[i]  << ' ' ;
    }
    cout << v[v.size()-1].substr(0,indexlast) << v[0].substr(indexfirst) << " " <<endl;
    /*cout << v[v.size()-1].substr(0, indexlast) << v[0].substr(indexfirst) << " ";

    for(int i = 1; i < v.size() - 1; i++){
        cout << v[i] << " ";
    }

    cout << v[0].substr(0, indexfirst) << v[v.size()-1].substr(indexlast) << endl;*/
}