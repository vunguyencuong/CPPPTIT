#include<bits/stdc++.h>

using namespace std;

int ts[1000005] = {};
int main()
{
    int t; cin>> t;
    while(t--)
    {
        for(int i = 0; i <= 1000000; i++) ts[i] = 0;
        int n,x; cin>> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            ts[a[i]]++;
        }
        if(ts[x] != 0) cout<< ts[x] << endl;
        else cout<< -1 << endl;
    }
}