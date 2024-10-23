#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        l n,x;
        cin>> n >> x;
        vector<l> a;
        for(int i = 0; i < n; i++)
        {
            l x;
            cin>> x;
            a.push_back(x);
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x) ans = i+1;
        }
        cout<< ans << endl;
    }
}