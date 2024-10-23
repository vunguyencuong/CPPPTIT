#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e6+5;
int ts[nmax]={};
int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            if(a[i] > 0 ) ts[a[i]]++;
        }
        for(int i = 1; i <= nmax; i++)
        {
            if(ts[i] == 0)
            {
                cout<< i << endl;
                break;
            }
        }
        for(int i = 1; i <= nmax; i++) ts[i] = 0;
    }
}