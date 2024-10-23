#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,x;
        cin>> n >> x;
        vector<int> a(n);
        vector<int> tanso(1000000,0);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            tanso[a[i]]++;
        }
        if(tanso[x] > 0) cout<< tanso[x] << endl;
        else cout<< -1 << endl;
    }
}