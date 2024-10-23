#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a; cin>> n >> a;
    cout<< n + a*(n-1)*n/2 << endl;
}

//n: 1
//n-1: 1+a
//n-2: 1+2*a
//n-3: 1+3*a
//....
//
//1 = n-(n-1): 1 + (n-1)*a
// ans = n*1 + a*(1+2+3+....+n-1) = n + a* (n-1)*n/2

// 5: 1
// 4: 1 + 1*3
// 3: 1 + 2*3
// 2: 1 + 3*3
// 1: 1 + 4*3
// 5 + 3*10 = 35

