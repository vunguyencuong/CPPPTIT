#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int a[n+5] = {};
        int check[10005] = {};
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
            check[i] = 1;
            for(int j = 1; j < i; j++)
            {
                if(a[i] >= a[j] && check[j] >= check[i]) check[i] = check[j]+1; // tim do dai day tang dan dai nhat
            }
            ans = max(ans,check[i]);
        }
        cout<< n - ans << endl;
    }
}