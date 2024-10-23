#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<ll> num(1e4+5,1);
void solve()
{
    int id2 = 0, id3 = 0, id5 = 0;
    for(int i = 1; i <  num.size(); i++)
    {
        num[i] = min(num[id2]*2,min(num[id3]*3,num[id5]*5));
        if(num[i] == num[id2]*2) id2++;
        if(num[i] == num[id3]*3) id3++;
        if(num[i] == num[id5]*5) id5++;
    }
}
int main()
{
    faster();
    int t; cin>> t;
    solve();
    while(t--)
    {
        int n; cin>> n;
        printf("%lld\n",num[n-1]);
    }
}