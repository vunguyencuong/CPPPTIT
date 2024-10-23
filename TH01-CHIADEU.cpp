#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int sum,ans;

void Try(int pos, int count)
{
    if(pos == n)
    {
        if(count == k) ans++;
        return;
    }
    for(int i = pos+1; i <= n; i++)
    {
        if(a[i] - a[pos] == sum) Try(i,count+1);
    }
}

int main()
{
    cin>> n >> k;
    a.resize(n+1,0);
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i];
        a[i] += a[i-1];
    }
    sum = a[n]/k;
    Try(0,0);
    cout<< ans << endl;
}