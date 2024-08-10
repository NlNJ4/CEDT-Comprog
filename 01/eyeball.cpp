#include <bits/stdc++.h>
using namespace std;

int main(){
    int xm,ym,xe,ye,re,rp;
    cin >> xe >> ye >> re >> rp >> xm >> ym ;
    float dy = (ym-ye), dx = (xm-xe) ,distance = sqrt(dy*dy+dx*dx);
    cout <<  round(((re-rp) / distance)*dx+xe) << ' ' <<round(((re-rp) / distance)*dy+ye);
}