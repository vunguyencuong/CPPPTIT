#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>> n;
    int a[n+5], check[n+5]  ={};
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        check[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j] && check[j] >= check[i]) check[i] = check[j] + 1;
        }
        ans = max(ans,check[i]);
    }
    cout<< ans << endl;
}