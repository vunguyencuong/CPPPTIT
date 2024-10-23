#include<bits/stdc++.h>
using namespace std;


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
        }
        sort(a.begin(),a.end());
        int min1, min2 = -99;
        min1 = a[0];
        for(int i = 1; i < n; i++)
        {
            if(a[i] != min1)
            {
                min2 = a[i];
                break;
            }
        }
        if(min2 == -99) cout<< -1 << endl;
        else cout<< min1 << " " << min2 << endl;
    }
}