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
        int a[1005];
        int b[1005];
        for(int i = 0; i < n; i++) cin>> a[i];
        sort(a,a+n);
        for(int i = 1; i < n; i++)
        {
            b[i-1] = a[i] - a[i-1];
        }
        sort(b,b+n-1);
        cout<< b[0] << endl;
    }
}