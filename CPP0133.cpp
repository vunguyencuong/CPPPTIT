#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
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
        int n;
        cin>> n;
        for(int i = 2; i <= n; i++)
        {
            if(check(i)) cout<< i << " ";
        }
        cout<< endl;
    }
}