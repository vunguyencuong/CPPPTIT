#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check1(ll n)
{
    int tang = 0, giam = 0;
    int modOld = n%10;
    n /= 10;
    while(n)
    {
        int modNew = n%10; n /= 10;
        if(modOld < modNew) giam++;
        else if(modOld > modNew) tang++;
        else return false;
        modOld = modNew;
    }
    if(tang == 0 || giam == 0) return true;
    else return false;
}
bool snt(ll n)
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
        n--;
        ll a = 1, b = 9;
        while(n--)
        {
            a *= 10;
            b = b*10 + 9;
        }
        int count = 0;
        for(int i = a; i<= b; i++)
        {
            if(check1(i))
            {
                if(snt(i)) count++;
            }
        }
        cout<< count << endl;
      /* for(int i = 10; i <= 99; i++)
       {
           if(snt(i))
           {
               if(check1(i)) cout<< i << " ";
           }
       }
       */
    }
}