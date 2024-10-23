#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n+5]={};
        int l[n+5]={};
        int lmax = 0;
        for(int i = 0; i < n; i++) cin>> a[i];
        for(int i = 0; i < n; i++)
        {
            l[i] = 1;
            for(int j = 0; j <= i; j++)
            {
                if(a[i] > a[j])
                {
                    l[i] = max(l[i],l[j]+1);
                }
            }
            lmax = max(lmax,l[i]);
        }
        cout<< lmax << endl;
    }
}