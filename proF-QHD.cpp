#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const nmax = 1e5+5;
int const mod = 1e9+7;
int n,k;
// với i <= k 
// a[1] = 1; // có 1 cách để bước lên bậc 1
// a[2] = a[1] + 1 = 2 // có 2 cách là: bước lên bậc 1 rồi bước lên bậc 2 hoặc bước 1 phát 2 bậc lên bậc 2
// a[3] = a[1] + a[2] + 1 = 4 // tương tự như bên trên
// a[i] = a[1] + a[2] + ... + 1 
// ...
// với i >= k
// a[i] = a[i-1] + a[i-2] + ... + a[i-k]
// hay a[i+k] = a[i] + a[i+1] + ... + a[i+k-1]
void solve()
{
    cin>> n >> k;
    vector<ll> a(nmax,0);
    a[1] = 1;
    ll sum = 1;
    for(int i = 2; i <= n; i++)
    {
        if(i <= k)
        {
            a[i] = (sum+1)%mod;
            sum += a[i];
            sum %= mod;
        }
        else
        {
            a[i] = sum;
            sum += a[i];
            sum -= a[i-k];
            sum %= mod;
            if(sum < 0)
            {
                sum += mod;
            }
        }
    }
    cout<< a[n] << endl;
    
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}