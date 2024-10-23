#include<bits/stdc++.h>
using namespace std;
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
        int x;
        cin>> x;
        int count = 0;
        for(int i = 1; i <= x; i++)
        {
            if(__gcd(i,x) == 1) count++;
        }
        if(snt(count)) cout<< 1 << endl;
        else cout<< 0 << endl;
    }
}