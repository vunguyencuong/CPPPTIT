#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int res = 0;
    while(n)
    {
        res += n%10;
        n /= 10;
    } 
    return res;
}
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
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        if(snt(n)) cout<< "NO" << endl;
        else
        {
            int res1 = sum(n);
            int res2 = 0;
            for(int i = 2; i*i <= n; i++)
            {
                while(n % i == 0 && snt(i))
                {
                    res2 += sum(i);
                    n /= i;
                }
            }
            if(n != 1) res2 += sum(n);
            if(res1 == res2) cout<< "YES" << endl;
            else cout<< "NO" << endl;
        }
    }
}