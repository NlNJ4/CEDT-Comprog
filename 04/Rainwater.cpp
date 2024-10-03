#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    int height[n],water=0;
    for(int i = 0 ; i < n ; i++) cin >> height[i];
    int rmax = 0 , lmax = 0 ,left = 0 , right = n-1;
    while(right>left){
        if(height[right]>height[left]){
            if(lmax > height[left]) water+=lmax-height[left];
            else lmax = height[left];
            left++;
        }
        else{
            if(rmax > height[right]) water+=rmax-height[right];
            else rmax = height[right];
            right--;
        }
    }
    cout << water;
}