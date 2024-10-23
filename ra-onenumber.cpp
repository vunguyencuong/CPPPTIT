#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n < 10) return 0;
    int vt = 1;
    int sum1 = 0, sum2 = 0;
    while(n){
        int x = n%10;
        if(vt % 2 == 1) sum1 += x;
        else sum2 += x;
        vt++;
        n /= 10;
    }
    vt--;
    if(vt % 2 == 0 && sum2 - sum1 == 1) return 1;
    if(vt % 2 == 1 && sum1 - sum2 == 1) return 1;
    return 0;
}

int main(){

    int a,b; cin>> a >> b;
    int res = 0;
    for(int i = a; i < b+1; i++){
        if(check(i) == 1){
            res++;
            cout<< i << endl;
        } 
    }
    cout<< res << endl;
}