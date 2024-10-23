#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        long long n; cin>> n;
        int m = sqrt(n);
        if(m*m == n) cout<< m << endl;
        else cout<< m+1 << endl;
    }
} 