#include<bits/stdc++.h>
using namespace std;

int main(){

    int w; cin>> w;
    int d,m; cin>> d >> m;

    int n = m-1;
    long long totalDate = d;
    if(n % 2 == 0){
        totalDate += n/2 * (30+31); 
    } else {
        totalDate += n/2 * 30 + (n/2 + 1) * 31;
    }
    int ans = w + totalDate%7 - 1;
    if(ans > 7){
        cout<< ans%7;
    } else cout<< ans;
}