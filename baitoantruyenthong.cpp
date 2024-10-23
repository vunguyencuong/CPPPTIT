#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t; cin>> n >> t;
    int a[n+5] = {0};
    int sum[n+5] = {0};
    for(int i = 1; i <= n; i++){
        cin>> a[i];
        sum[i] += sum[i-1] + a[i];
    }
    int m,l,r;
    while(t--){
        cin>> m >> l >> r;
        if(m == 1) cout<< sum[r] - sum[l-1] << endl;
        if(m == 2){
            sum[l+1] += r - a[l];
            a[l] = r;    
        } 
    }
}