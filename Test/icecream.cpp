#include "bits/stdc++.h"

using namespace std;

int main(){
   int n; cin >> n;
   map<string,float> icecream,sell;
   for(int i = 0 ; i < n ; i++){
    string product; cin >> product;
    float price; cin >> price;
    icecream[product] = price;
   } 
   int buy ; cin >> buy;
   for(int i = 0 ; i < buy ; i++){
    string product; cin >> product;
    int time; cin >> time;
    auto itr = icecream.find(product);
    if(itr!=icecream.end()) sell[product]+=icecream[product]*time;
   }
   if(sell.empty()){
    cout << "No ice cream sales" ;
    return 0;
   }
   float sum = 0;
   float mx = 0;
   for(auto v:sell){
    if(mx<v.second) mx = v.second;
    sum+=v.second;
   }
   set <string> menu;
   for(auto v:sell){
    if(mx==v.second) menu.insert(v.first);
   }
   cout << "Total ice cream sales: " << sum << endl;
   cout << "Top sales: ";
   for(auto m:menu) cout << m << ' ';
}