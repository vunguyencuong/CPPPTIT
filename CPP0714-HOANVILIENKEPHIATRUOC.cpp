#include<bits/stdc++.h>
using namespace std;

void Sinh(int a[], int n)
{
    int i = n-1;
    while(i > 0 && a[i] < a[i+1]) i--;
    if(i == 0)
    {
        cout<< n << " ";
        while(n-- && n > 0)
        {
            cout<< n << " ";
        }
        return;
    }
    if(i)
    {
        int k = n;
        while(a[i] < a[k]) k--;
        swap(a[i],a[k]);
        int l = i+1, r = n;
        while(l <= r)
        {
            swap(a[l],a[r]);
            l++,r--;
        }
    }
    for(int i = 1; i <= n; i++) cout<< a[i] << " ";
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n+5]={};
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
        }
        Sinh(a,n);
        cout<< endl;
    }
}