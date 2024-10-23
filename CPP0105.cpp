#include<bits/stdc++.h>
using namespace std;
typedef long l;

l check(l n)
{
    while(n)
    {
        int m = n%10;
        if(m != 0 && m != 6 && m != 8) return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        l n;
        cin>> n;
        int ans = check(n);
        if(ans == 1) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
}