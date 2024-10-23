#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n;
        int a[n+5] = {};
        for(int i = 0; i < n; i++) cin>> a[i];
        int count = 0;
        for(int i = 0; i < n-1; i++)
        {
            k = i;
            for(int j = i+1; j < n; j++)
            {
                if(a[j] < a[k]) k = j;
            }
            if(k != i) count++;
            swap(a[k],a[i]);
        }
        cout<< count << endl;
    }
}