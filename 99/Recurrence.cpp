#include <iostream>
#include <map>
using namespace std;

int F(int n);
int M(int n);

int H(int n) { 
    if(n==0) return 0;
    return 2*H(n-1)+1;
}
int C(int n) { 
    if(n==0) return 1;
    int sum=0;
    for(int k=0;k<=n-1;k++){
        sum+=(C(k)*C(n-1-k));
    }
    return sum;
}
int F(int n) { 
    if(n==0) return 1;
    return n-M(F(n-1));
}
int M(int n) {
    if(n==0) return 0;
    return n-F(M(n-1));
}
int main() {
    map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
        cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}
