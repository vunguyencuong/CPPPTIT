#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[30];
int ans = 0;

void check()
{
    int sum = 0;
    for(int i = 1; i <= k; i++)
    {
        sum += a[i];
    }
    if(sum == s) ans++;
}

void Try(int i)
{
    for(int j = a[i-1]+1; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i == k) check();
        else Try(i+1);
    }
}

int main()
{
    while(true)
    {
        cin>> n >> k >> s;
        if(n == k && k == s && s == 0) return 0;
        Try(1);
        cout<< ans << endl;
        ans = 0;
    }
}