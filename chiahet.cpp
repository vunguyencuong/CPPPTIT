#include<bits/stdc++.h>
using namespace std;

int solveSum(long long n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    long long  a,b,k; cin>> a >> b >> k;
    long long l, r;
    if(a % k == 0){
        l = a;
    } else l = (a/k+1)*k;
    if(b % k == 0){
        r = b;
    } else r = (b/k-1)*k;
    int count = 0;
    for(long long i = l; i <= r; i+=k){
        if(solveSum(i) % k == 0) count++;
    }
    cout<< count << endl;
}