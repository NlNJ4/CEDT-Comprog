#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    char table[n][n];
    bool check[n][n]={false};
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            check[i][j]=false;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> table[i][j];
            if(table[i][j]=='Q') check[i][j]=true;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int cnt = 0;
            if(table[i][j]=='Q'){
                for(int ii = i+1 ; ii < n ; ii++ ){//widthright
                    if(table[ii][j] == 'Q'){
                        cnt++;
                        check[ii][j] = false;
                        //cout << i << ' ' << j << ' ' << 1 << ' ' << endl;
                    }
                }
                for(int ii = i-1 ; ii >= 0 ; ii-- ){//widthleft
                    if(table[ii][j] == 'Q'){
                        cnt++;
                        check[ii][j] = false;
                        //cout << i << ' ' << j << ' '  << 2 << ' ' << endl;
                    }
                }
                for(int ii = j+1 ; ii < n ; ii++ ){//top
                    if(table[i][ii] == 'Q'){
                        cnt++;
                        check[i][ii] = false;
                        //cout << i << ' ' << j << ' '  << 3 << ' ' << endl;
                    }
                }
                for(int ii = j-1 ; ii >= 0 ; ii-- ){//bottom
                    if(table[i][ii] == 'Q'){
                        cnt++;
                        check[i][ii] = false;
                        //cout << i << ' ' << j << ' '  << 1 << ' ' << endl;
                    }
                }
                for(int ii = 1 ; ii < n ; ii++ ){
                    if((i-ii>=0) && (j-ii >=0)){
                        if(table[i-ii][j-ii] == 'Q' && check[i-ii][j-ii]==true){
                        cnt++;
                        check[i-ii][j-ii] = false;
                        //cout << i << ' ' << j << ' '  << 5 << ' ' << endl;
                        }
                    }
                    if((i-ii>=0) && (j+ii < n)){
                        if(table[i-ii][j+ii] == 'Q' && check[i-ii][j+ii]==true){
                        cnt++;
                        check[i-ii][j+ii] = false;
                        //cout << i << ' ' << j << ' '  << 6 << ' ' << endl;
                        }
                    }
                    if((i+ii < n) && (j-ii >= 0)){
                        if(table[i+ii][j-ii] == 'Q' && check[i+ii][j-ii]==true){
                        cnt++;
                        check[i+ii][j-ii] = false;
                        //cout << i << ' ' << j << ' ' << 7 << ' ' << endl;
                        }
                    }
                    if((i+ii < n) && (j+ii < n)){
                        if(table[i+ii][j+ii] == 'Q' && check[i+ii][j+ii]==true){
                        cnt++;
                        check[i+ii][j+ii] = false;
                        //cout << i << ' ' << j << ' '  << 8 << ' ' << endl;
                        }
                    }
                }
            }
            if(cnt>0) check [i][j] = false;
        }
    }
    //cout << "Space : " << endl; 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(check[i][j]) cout << 'Q';
            else cout << '-';
        }
        cout << endl;
    }
} 