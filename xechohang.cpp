#include<bits/stdc++.h>
using namespace std;
 
long long bcnn(int s, int t){
    int s1 = s, t1 = t;
    while(t != 0){
        int tmp = s%t;
        s = t;
        t = tmp;
    }
    return s1/s*t1;
}
 
int main(){
    int n; cin>> n;
    int s,t; cin>> s >> t;
    cout<< n / bcnn(s,t) << endl;
}
