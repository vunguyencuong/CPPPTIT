#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,k; cin>> n >> k;
    int a[n+5]={};
    for(int i = 0; i < n; i++) cin>> a[i];
    sort(a,a+n);
    cout<< a[k-1] << " ";
}