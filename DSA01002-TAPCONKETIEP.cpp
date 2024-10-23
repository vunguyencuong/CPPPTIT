#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        int a[n+5] = {};
        int check = 0;
        for(int i = 1; i <= k; i++) cin>> a[i];
        for(int i = k; i >= 1; i--)
        {
            if(a[i] != n-k+i)
            {
                check = 1;
                a[i]++;
                for(int j = i+1; j <= n; j++)
                {
                    a[j] = a[j-1] + 1;
                }
                break;
            }
        }
        if(check == 0)
        {
            for(int i = 1; i <= k; i++) cout<< i << " ";
        }
        else
        {
            for(int i = 1; i <= k; i++) cout<< a[i] << " ";
        }
        cout<< endl;
    }
}