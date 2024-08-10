#include <bits/stdc++.h>

using namespace std;

int main(){
    double W,H;
    cin >> W >> H;
    cout << fixed <<setprecision(14) << sqrt(W*H)/60 << endl;
    cout << fixed <<setprecision(14) << 0.024265 * pow(W,0.5378) * pow(H,0.3964) << endl;
    cout << fixed <<setprecision(14) << 0.0333 * pow(W,(0.6157 - 0.0188*log10(W))) * pow(H,0.3) << endl;

}