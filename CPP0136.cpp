#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool snt(int n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        ll m = sqrt(n);
        int count = 0;
        for(int i = 2; i <= m; i++)
        {
            if(snt(i)) count++;
        }
        cout<< count << endl;
    }
}