#include "bits/stdc++.h"

using namespace std;

int checkoverlaping(int rec1[4],int rec2[4]){
    int left,right,top,bottom;
    left = max(rec1[0],rec2[0]);
    right = min(rec1[2],rec2[2]);
    top = min(rec1[3],rec2[3]);
    bottom = max(rec1[1],rec2[1]);
    if(right>left&&top>bottom){
        return (right-left)*(top-bottom);
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int rectangles[n][4];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin >> rectangles[i][j];
        }
    }
    int mx = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(mx<checkoverlaping(rectangles[i],rectangles[j])){
                mx = checkoverlaping(rectangles[i],rectangles[j]);
            }
        }
    }
    if(mx>0){
        cout << "Max overlapping area = " << mx << endl;
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(checkoverlaping(rectangles[i],rectangles[j]) == mx){
                    cout << "rectangles " << i << " and " << j << endl;
                }
            }
        }
    }
    else cout << "No overlaps";
}