#include "bits/stdc++.h"
using namespace std;
int main(){
    long long int x;
    cin >> x;
    if(x==0) cout << "zero" << endl << "even" ;
    if(x>0){
        cout << "positive" << endl;
        if(x%2==1) cout << "odd";
        else cout << "even";
    }
    if(x<0){
        x = x * (-1); 
        cout << "negative" << endl;
        if(x%2==1) cout << "odd";
        else cout << "even";
    }
}