#include<bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin>> n;
    vector<int> a(n+5);
    for(int i = 0; i < n; i++) cin>> a[i];
    int lmax = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >= i; j--)
        {
            if(a[i] <= a[j])
            {
                if(lmax < (j-i)) lmax = j-i;
                break;
            }
        }
    }
    cout<< lmax << endl;

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
