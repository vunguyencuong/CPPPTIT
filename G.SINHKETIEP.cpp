#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
void Cout(int k)
{
    cout<< "(";
    for(int i = 1; i < k; i++)
    {
        cout<< a[i] << " ";
    }
    cout<< a[k] << ") ";
}

void sinh( int s, int k)
{
    for(int i = a[k-1]; i >= 1; i--)
    {
        if(s + i <= n)
        {
            a[k] = i;
            if(s+i == n) Cout(k);
            else sinh(s+i,k+1);
        }
    }
}

int  main()
{
    int t;
    cin>> t;
    while(t--)
    {
        cin>> n;
        a.assign(n+1,0);
        a[0] = n;
        sinh(0,1);
        cout<< endl;
    }
}