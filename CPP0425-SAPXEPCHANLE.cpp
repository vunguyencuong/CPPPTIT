#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int a[n+5]={};
        int ans[n+5]={};
        for(int i = 0; i < n; i++) cin>> a[i];
        sort(a,a+n);
        int j = 0;
        for(int i = 0; i < n; i+=2) ans[i] = a[j++];
        for(int i = 1; i < n; i+=2) ans[i] = a[j++];
        for(int i = 0; i < n; i++) cout<< ans[i] << " ";
        cout<< endl;
    }
}