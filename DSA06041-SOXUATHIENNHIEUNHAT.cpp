#include<bits/stdc++.h>
using namespace std;
int ts[1000005] = {0};

int main()
{
    int t; cin>> t;
    while(t--)
    {
        for(int i = 0; i <= 1000000; i++) ts[i] = 0;
        int n; cin>> n;
        int a[100005] = {};
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            ts[a[i]]++;
        }
        int maxts = 0;
        int maxvl = 0;
        for(int i = 0; i < n; i++)
        {
            if(maxts < ts[a[i]])
            {
               maxts = ts[a[i]];
               maxvl = a[i];
            }
        }
        if(maxts > n/2) cout<< maxvl << endl;
        else cout<< "NO" << endl;
    }
}