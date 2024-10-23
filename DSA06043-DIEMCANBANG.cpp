#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int a[n+5] = {};
        for(int i = 1; i <= n; i++) cin>> a[i];
        int l[n+5] = {0}, r[n+5] = {0};
        int check = 0;
        for(int i = 1; i <= n; i++) l[i] = l[i-1] + a[i];
        for(int i = n; i > 0; i--) r[i] = r[i+1] + a[i];
        for(int i = 1; i <= n; i++)
        {
            if(l[i-1] == r[i+1])
            {
                check = 1;
                cout<< i << endl;
                break;
            }
        }
        if(check == 0) cout<< -1 << endl;
    }
        
}