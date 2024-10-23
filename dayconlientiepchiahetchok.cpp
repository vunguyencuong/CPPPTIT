#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k; cin>> n >> k;
    vector<int> a(n);
    int max  = 0;
    int len = 0;
    for(int i = 0; i < n; i++){
        cin>> a[i];
        if(a[i] % k == 0) len++;
        else{
            if(len > max) max = len;
            len = 0;
        }
    }
    cout<< max << endl;
}

