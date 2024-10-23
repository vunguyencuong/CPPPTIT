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
        ll l,r;
        cin>> l >> r;
        int a = sqrt(l);
        int b = sqrt(r);
        if(a == sqrt(l)) a = a;
        else a = a+1;
        int count = 0;
        for(int i = a; i <= b; i++)
        {
            if(snt(i)) count++;
        }
        cout<< count << endl;
    }
}