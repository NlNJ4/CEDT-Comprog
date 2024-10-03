#include "bits/stdc++.h"

using namespace std;

int main(){
    int x, y, i = 1 ,cnt = 0;
    int maxline1 = -INT_MAX, maxline2 = -INT_MAX;
    int minline1 = INT_MAX, minline2 = INT_MAX;

    while (true) {
        cin >> x;
        if(x==-998){
            cout << minline1 << ' ' << maxline2;
            break;
        }
        else if(x==-999){
            cout << minline2 << ' ' << maxline1;
            break;
        }
        else{
            cin >> y;
            if(i==1){
                maxline1 = max(x,maxline1);
                maxline2 = max(y,maxline2);
                minline1 = min(x,minline1);
                minline2 = min(y,minline2);
            }
            else{
                maxline1 = max(y,maxline1);
                maxline2 = max(x,maxline2);
                minline1 = min(y,minline1);
                minline2 = min(x,minline2);
            }
        }
        i = 1 - i; 
    }
}