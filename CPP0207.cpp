#include<bits/stdc++.h>
using namespace std;
int a[1000002];
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,d;
        cin>> n >> d;
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        if(n > d)
        {
            for(int i = d; i < n; i++) cout<< a[i] << " ";
            for(int i = 0; i < d; i++) cout<< a[i] << " ";
        }
        else
        {
            int m = d%n;
            for(int i = m; i < n; i++) cout<< a[i] << " ";
            for(int i = 0; i < m; i++) cout<< a[i] << " ";
        }
        cout<< endl;
    }
}