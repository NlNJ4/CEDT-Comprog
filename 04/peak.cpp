#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,cnt=0;
    cin >> n;
    float graph[n];
    for(int i = 0 ; i < n ; i++){
        cin >> graph[i];
    }
    for(int i = 1 ; i < n-1 ; i++){
        if(graph[i]>graph[i-1] && graph[i]>graph[i+1]) cnt++;
    }
    cout << cnt;
}