#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll num[1000005];

void SangLP()
{
    for(int i = 1; i <= 1000000; i++)
    {
        num[i] = (ll) i*i*i;
    }
}

bool check(ll a, ll b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    int id = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s2[id] == s1[i]) id++;
        if(id >= s2.length()) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    SangLP();
    int t; cin>> t;
    while(t--)
    {
        long long n; cin>> n;
        int stop = 0;
        for(int i = 1e6; i >= 1 ;i--)
        {
            if(num[i] == n)
            {
                cout<< num[i] << endl;
                stop = 1;
                break;
            }
            if(num[i] < n)
            {
                if(check(n,num[i]))
                {
                    cout<< num[i] << endl;
                    stop = 1;
                    break;
                }
            }
        }
        if(stop == 0) cout<< -1 << endl;
    }
}