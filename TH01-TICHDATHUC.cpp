#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int m,n; cin>> m >> n;
        vector<int> a(m);
        vector<int> b(n);
        vector<int> c(m+n,0);
        for(int i = 0; i < m; i++) cin>> a[i];
        for(int i = 0; i < n; i++) cin>> b[i];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                c[i+j] += a[i]*b[j];
            }
        }
        for(int i = 0; i < m+n-1; i++)
        {
            cout<< c[i] << " ";
        }
        if(c[m+n-1] != 0) cout<< c[m+n-1];
        cout<< endl;
    }
}