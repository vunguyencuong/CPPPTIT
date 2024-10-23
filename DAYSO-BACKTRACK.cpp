#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
    if(n == 1) return;
    for(int j = 1; j < n; j++)
    {
        a[j] = a[j] + a[j+1];
    }
    cout<< "[";
    for(int j = 1; j < n-1; j++)
    {
        cout<< a[j] << " ";
    }
    cout<< a[n-1] << "]" << endl;
    return solve(a,n-1);
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
        }
        cout<< "[";
        for(int i = 1; i < n; i++)
        {
            cout<< a[i] << " ";
        }
        cout<< a[n] << "]" << endl;
        solve(a,n);
    }
}