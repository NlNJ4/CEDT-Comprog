#include <bits/stdc++.h> 
using namespace std;
 
int exponentMod(int A, int B, int C) 
{
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
 
    long y; 
    if (B % 2 == 0) { 
        y = exponentMod(A, B / 2, C) ; 
        y = (y * y) % C; 
    } 
 
    else { 
        y = exponentMod(A, B / 2, C) ; 
        y = (A*y*y)%C; 
    } 
 
    return (int)((y + C) % C); 
} 
 
int main() 
{ 
    int A,B,C;
    cin >> A >> B >>C; 
    cout << exponentMod(A, B, C); 
    return 0; 
} 