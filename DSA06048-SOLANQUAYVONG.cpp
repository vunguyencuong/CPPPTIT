#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<ll> a(n),b;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            b.push_back(a[i]);
        } 
        sort(b.begin(),b.end());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(b[0] == a[i])
            { 
                ans = i;
                break;
            }
        }
        cout<< ans << endl;
    }
}