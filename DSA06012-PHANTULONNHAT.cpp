#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        int len = n-1;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>> a[i];
        sort(a.begin(),a.end());
        while(k--)
        {
            cout<< a[len--] << " ";
        }
        cout<< endl;
    }
}