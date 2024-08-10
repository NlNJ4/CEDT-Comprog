#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;
    y = (y - 543)%100;
    cout << int(y + floor(y/4) + 11) % 7;
}