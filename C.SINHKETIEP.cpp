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
        int a[10000];
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
        }
        int i = n-1;
        int check = 1;
        while(i > 0 && a[i] > a[i+1]) i--;
        if(i > 0)
        {
            int k = n;
            while(a[i] > a[k]) k--;
            swap(a[i], a[k]);
            int l = i+1, r = n;
            while(l <= r)
            {
                swap(a[l], a[r]);
                l++,r--;
            }

        }
        else check = 0;
        if(check == 1)
        {
            for(int i = 1; i <= n; i++)
            {
                cout<< a[i] << " ";
            }
        }
        else 
        {
            for(int i = 1; i<= n; i++)
            {
                cout<< i <<" ";
            }
        }
        cout<< endl;
    }
}