#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20],x[20];
int ans;

bool ok()
{
    for(int i = 1; i <= k; i++)
    {
        if(a[i] != x[i]) return false;
    }
    return true;
}

void Sinh(int i)
{
    for(int j = a[i-1] + 1; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i == k)
        {
            if(ok()) cout<< ans << endl;
            else ans++;
        }
        else Sinh(i+1);
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n >> k;
        ans = 1;
        for(int i = 1; i <= k; i++)
        {
            cin>> x[i];
        }
        Sinh(1);
    }
}