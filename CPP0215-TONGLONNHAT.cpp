#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e4;
typedef long long ll;
int n,m;
int a[nmax],b[nmax];
void solve()
{
    cin>> n >> m;
    ll sumA = 0, sumB = 0;
    for(int i = 0; i < n; i++)
    { 
        cin>> a[i];
        sumA += a[i];
    }
    for(int j = 0; j < m; j++)
    {
        cin>> b[j];
        sumB += b[j];
    }
    ll sum1 = 0, sum2 = 0, MAX = max(sumA,sumB);
    ll testA = 0, testB = 0;
    for(int i = 0; i < min(n,m); i++)
    {
        testA += a[i];
        testB += b[i];
        // bằng cách duyệt từng vị trí chuyển từ dãy A => B để xét xem vị trí nào thì cho ra tổng max
        MAX = max(testA + (sumB-testB),max(testB+(sumA-testA),MAX));
    }
    cout<< MAX << endl;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}