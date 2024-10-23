#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,s;
        int a[205];
        cin>> n >> s;
        for(int i = 1; i <= n; i++) cin>> a[i];
        int check[s+5] = {}; check[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            for(int j = s; j >= a[i]; j--)
            {
                if(check[j] == 0 && check[j-a[i]] == 1) check[j] = 1;
            }
        }
        if(check[s] == 1) cout<< "YES" << endl;
        else cout<< "NO"<< endl;
    }
}   