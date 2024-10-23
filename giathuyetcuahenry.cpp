#include<bits/stdc++.h>
using namespace std;

bool checkSnt(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin>> n;
    for(int i = 1; i <= 1000; i++){
        if(checkSnt(i*n+1) == false){
            cout<< i;
            break;
        }
    }
}