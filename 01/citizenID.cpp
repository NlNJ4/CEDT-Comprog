#include <bits/stdc++.h>

using namespace std;

int val(char c){
    return int(c-'0');
}

int main(){
    string s;
    cin >> s;
    
    int x = (11-(13*val(s[0])+12*val(s[1])+11*val(s[2])+10*val(s[3])+9*val(s[4])+8*val(s[5])+7*val(s[6])+6*val(s[7])+5*val(s[8])+4*val(s[9])+3*val(s[10])+2*val(s[11]))%11) % 10;
    printf("%c-%c%c%c%c-%c%c%c%c%c-%c%c-%d",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],s[9],s[10],s[11],x);
}