#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s,res;
vector<int>a;
vector<int>b;

void solve(int pos, int i ,int sum)
{
    if(sum > s) return;
    if(sum == s)
    {
        res = min(res,i);
        return;
    }
    for(int j = pos; j < n; j++)
    {
        if(sum + b[pos] < s )
        {
            return;
        }
        solve(j+1,i+1,sum+a[j]);
    }
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        cin>> n >> s;
        a.assign(n,0);
        b.assign(n,0);
        res = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        sort(a.rbegin(),a.rend());
        b[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i-- ) b[i] = b[i+1] + a[i];
        if(b[0] < s) cout<< "-1" << endl;
        else
        {
            solve(0,0,0);
            if(res != INT_MAX) cout<< res << endl;
            else cout<< "-1" << endl;
        }
    }     
}