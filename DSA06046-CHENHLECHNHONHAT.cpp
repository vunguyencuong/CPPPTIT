#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>> a[i];
        sort(a.begin(),a.end());
        int min = a[1] - a[0];
        for(int i = 2; i < n; i++)
        {
            if(min > a[i] - a[i-1]) min = a[i] - a[i-1];
        }
        cout<< min << endl;
    }

}