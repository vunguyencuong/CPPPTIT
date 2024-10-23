#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b; cin>> n >> a >> b;
    if(a+1 > n-b) cout << n-a << endl;
    else cout<< b+1 << endl;
}



// từ : a+1 -> n => có n-a-1+1 = n-a số
// từ: n-b -> n => có n-n+b+1 = b+1 số