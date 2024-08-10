#include <bits/stdc++.h>

using namespace std;

long lgd(long a, long b){
    if (b == 0) return a;
    return lgd(b, a%b);
}

int main(){
    string x , y , z;
    cin >> x >> y >> z;
    long top = (stoi(x)*pow(10,(y+z).size()) + stoi(y)*pow(10,z.size()) + stoi(z) - stoi(x)*pow(10,(y).size()) - stoi(y));
    long under = pow(10,(y+z).size())-pow(10,(y).size());
    //cout << top  << under;
    cout << top/(lgd(top,under)) << " / " << under/(lgd(top,under));
    //1340-134
}