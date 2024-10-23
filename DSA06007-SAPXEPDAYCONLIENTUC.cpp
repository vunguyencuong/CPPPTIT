#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a,b;
        a.resize(n);
        for(int i = 0; i < n; i++)
        {
             cin>> a[i];
             b.push_back(a[i]);
        }
        int l = 0,r = 0;
        sort(a.begin(),a.end());
        for(int i = 0; i < n; i++)
        {
            if(l == 0 && a[i] != b[i])
            {
                l = i+1;
                break; 
            }
        }
        for(int j = n-1; j >= 0; j--)
        {
            if(a[j] != b[j])
            {
                r = j+1;
                break;
            }
        }
        cout<< l << " " << r << endl;
    }
}