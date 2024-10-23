#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster() ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int x,y,n;
        ll z;
        cin>> x >> y >> z >> n;
        ll a = 1;
        ll b = 9;
        n--;
        while(n--)
        {
            a *= 10;
            b = b*10 + 9;
        }
        ll mid = x*y/__gcd(x,y);
        ll ans = mid*z/__gcd(mid,z);
        if(ans > b) cout<< -1 << endl;
        else
        {
            if(a % ans == 0) cout<< a << endl;
            else
            {
                ll p = a/ans;
                ll result = ans*(p+1);
                if(result > b) cout<< -1 << endl;
                else cout<< result << endl;

            }
            
        }
    }
}