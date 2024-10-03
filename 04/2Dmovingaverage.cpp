#include "bits/stdc++.h"

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    float table[h][w];
    for(int i = 0 ; i < h ; i++){
        for(int j = 0 ; j < w ; j++){
            cin >> table[i][j];
        }
    }
    for(int i = 1 ; i < h-1 ; i++){
        for(int j = 1 ; j < w-1 ; j++){
            cout << round((table[i-1][j-1] + table[i][j-1] + table[i+1][j-1] + table[i-1][j] + table[i-1][j+1] + table[i][j] + table[i+1][j] +table[i+1][j+1] +table[i][j+1])*100/9)/100 << ' ';
        }
        cout << endl;
    }
}