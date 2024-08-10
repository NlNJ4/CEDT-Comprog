#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b,c;
    cin >> a >> b >> c;
    cout << round(((-b-sqrt(pow(b,2)-4*a*c))/2/a)*1e3)/1e3 << ' ' << round(((-b+sqrt(pow(b,2)-4*a*c))/2/a)*1e3)/1e3 << endl;
}