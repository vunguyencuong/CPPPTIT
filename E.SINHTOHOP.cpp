#include<bits/stdc++.h>
using namespace std;

void Sinh(int a[], int n, int k, int &check)
{
    int i = k;
    while(i > 0 && a[i] == n-k+i) i--;
    a[i]++;
    if(i > 0)
    {
        for(int j = i+1; j <= n; j++)
        {
            a[j] = a[j-1] +1;
        }
    }
    else check = 0;
}

void Cout(int a[], int n, int k)
{
    for(int i = 1; i <= k ;i++)
    {
        cout<< a[i];
    }
    cout<< " ";
}

void Next(int a[], int n, int k , int check)
{
    for(int i = 1; i <= n; i++ ) a[i] = i;
    while(check)
    {
        Cout(a,n,k);
        Sinh(a,n,k,check);
    }
}


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        int check = 1;
        int a[1000]={};
        Next(a,n,k,check);
        cout<< endl;
    }
}