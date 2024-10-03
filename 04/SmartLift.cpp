#include "bits/stdc++.h"

using namespace std;

int lifted(int liftstart,int liftstop,int personstart,int personstop){
    if(liftstart>liftstop){
        if((liftstart>=personstart)&&(personstart>=liftstop)){
            if(personstop>=liftstop&&personstart>=personstop){
                return 0;
            }
            else{
                return abs(personstop-liftstop);
            }
        }
        else{
            return abs(personstart-liftstop)+abs(personstop-personstart);
        }
    }
    else if(liftstart==liftstop){
        return abs(liftstop-personstart) + abs(personstart-personstop);
    }
    else{
        if((liftstart<=personstart)&&(personstart<=liftstop)){
            if((personstop<=liftstop)&&(personstart<=personstop)) return 0;
            else return abs(personstop-liftstop);
        }
        else return abs(personstart-liftstop) + abs(personstop-personstart);
    }
}

int main(){
    int n ;
    cin >> n;
    int lift[n][3];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++) cin >> lift[i][j];
    }
    int m;
    cin >> m;
    int passenger[m][2];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> passenger[i][j];
        }
    }
    for(int i = 0 ; i < m ; i++){
        int mn = INT_MAX;
        int set=m;
        for(int j = 0 ; j < n ; j++){
            //cout << j << ' ' <<lifted(lift[j][1],lift[j][2],passenger[i][0],passenger[i][1]) << endl;
            if(mn>abs(lifted(lift[j][1],lift[j][2],passenger[i][0],passenger[i][1]))){
                mn = abs(lifted(lift[j][1],lift[j][2],passenger[i][0],passenger[i][1]));
                set = j;
            }
            else if(mn==abs(lifted(lift[j][1],lift[j][2],passenger[i][0],passenger[i][1]))){
                if(lift[set][0]>lift[j][0]) set = j;
            }
        }
        cout << ">> " << lift[set][0] << endl;
    }
}