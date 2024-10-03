#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
    vector <string> s;
    string word ;
    for(int i = 0 ; i < line.size();i++){
        if(line[i]!=delimiter){
            word+=line[i];
        }
        else{
            if(word=="") continue;
            else{
                s.push_back(word);
                word="";
            }
        }
        if(i==line.size()-1){
            if(word=="") continue;
            else{
                s.push_back(word);
                word="";
            }
        }
    }
    return s;
}
int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) {
 cout << '(' << e << ')';
 }
}
