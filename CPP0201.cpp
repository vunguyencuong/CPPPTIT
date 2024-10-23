#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        ll a[n+2];
        for(int i = 0 ;i < n; i++)
        {
            cin>> a[i];
        }
        sort(a,a+n);
        int min = 999999;
        for(int i = 0; i < n-1; i++)
        {
            int x = a[i+1] - a[i];
            if(x < min) min = x;
        } 
        cout<< min << endl;
    }
}