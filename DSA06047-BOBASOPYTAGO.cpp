#include<bits/stdc++.h>

using namespace std;

int bsearch(long long a[], int l, int r, long long x)
{
    while(l <= r)
    {
        int pivot = (l+r)/2;
        if(a[pivot] == x) return 1;
        else if(a[pivot] > x) r = pivot - 1;
        else if(a[pivot] < x) l = pivot + 1;
    }
    return 0;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        long long a[n+5] = {};
        for(int i = 0; i < n; i++)
        { 
            cin>> a[i];
            a[i] *= a[i];
        }
        int check = 0;
        sort(a,a+n);
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(bsearch(a,j+1,n-1,(long long)a[i]+a[j]) )
                {
                    check = 1;
                    break;
                }
            }
        }
        if(check == 1) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
}