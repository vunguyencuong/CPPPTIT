#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n+5]={};
        for(int i = 0; i < n; i++) cin>> a[i];
        ll b[n+5]={};
        for(int i = 0; i < n; i++)
        {
            if(i == 0) b[i] = a[i]*a[i+1];
            if(i == n-1) b[i] = a[i]*a[i-1];
            if(i > 0 && i < n-1) b[i] = a[i-1]*a[i+1];
        }
        for(int i = 0; i < n; i++) cout<< b[i] << " ";
        cout<< endl;
    }
}