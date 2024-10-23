#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    if(sqrt(n)*sqrt(n) == n) return true;
    return false;
}

int main(){
    long long n; cin>> n;
    long long max = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(check(i) && max < i) max = i;
            if(check(n/i) && max < n/i) max = n/i; 
        }
    }
    cout<< max << endl;
}