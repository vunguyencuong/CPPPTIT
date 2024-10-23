#include<bits/stdc++.h>
using namespace std;

struct data
{
    int value;
    int high;
};
void solve(data a[], int l, int r, int oldHigh)
{
    if(l > r) return;
    int maxId = l;
    for(int i = l; i <= r; i++)
    {
        if(a[maxId].value < a[i].value)
        {
            maxId = i;
        }
    }
    a[maxId].high = oldHigh + 1;
    solve(a,l,maxId-1,a[maxId].high);
    solve(a,maxId+1,r,a[maxId].high);
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        data a[n+5];
        for(int i = 0; i < n; i++)
        {
            cin>> a[i].value;
            a[i].high = 0;
        }
        solve(a,0,n-1,-1);
        for(int i = 0; i < n; i++) cout<< a[i].high << " ";
        cout<< endl;
    }
}