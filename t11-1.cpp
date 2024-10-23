#include<bits/stdc++.h>
using namespace std;

long long a[1000005] = {0};
int main(){
    int n; cin>> n;
    for(int i = 0; i < n; i++) cin>> a[i];
    long long ans = 0;
    for(int i = 0; i < n-1; i++){
        if(ans < a[i] + a[i+1]) ans = a[i] + a[i+1];
    }
    cout<< ans << endl;
}