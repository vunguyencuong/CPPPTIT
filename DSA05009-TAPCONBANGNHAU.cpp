#include<bits/stdc++.h>
using namespace std;
int n, a[150];
int sum; string ans;
void Try(int pos, int k)
{
    if(ans == "YES") return;
    if(2 * k == sum)
    {
        ans = "YES";
        return;
    }
    if(pos < n )
    {
        if(2 * (k+a[pos]) <= sum) Try(pos+1,k+a[pos]);
        Try(pos+1,k);
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        sum = 0; ans = "NO";
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
            sum += a[i];
        }
        if(sum % 2 == 0)
        {
            Try(0,0);
        }
        cout<< ans << endl;
    }
}