#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if(n < 2) return false;
    for(int i = 2 ;i*i <= n; i++)
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
        int m,n;
        cin>> m >> n;
        for(int i = m; i <= n; i++)
        {
            if(check(i)) cout<< i << " ";
        }
        cout<< endl;
    }
}