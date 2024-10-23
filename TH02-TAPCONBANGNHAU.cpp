#include<bits/stdc++.h>
using namespace std;
int n;
int a[105] = {};
int sum, stop;
void Try(int id, int k)
{
    if(stop == 1) return;
    if(k*2 == sum)
    {
        stop = 1;
        cout<< "YES" << endl;
        return;
    }
    if(id < n)
    {
        if(2 * (k + a[id]) <= sum) Try(id+1,k+a[id]);
        Try(id+1,k);
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        sum = 0; stop = 0;
        cin>> n;
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
            sum += a[i];
        }
        if(sum%2 == 1) cout<< "NO" << endl;
        else{
            Try(0,0);
        }
    }
}