#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,m; cin>> n >> m;
        int a[n+5]={};
        int b[m+5]={};
        int tanso[100005]={};
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            tanso[a[i]]++;
        }
        for(int i = 0; i < m; i++)
        {
            cin>> b[i];
            tanso[b[i]]++;
        }
        for(int i = 0; i < 1e5+5; i++)
        {
            if(tanso[i] > 0) cout<<  i << " ";
        }
        cout<< endl;
        for(int i = 0; i < 1e5+5; i++)
        {
            if(tanso[i] > 1) cout<< i << " ";
        }
    }
}