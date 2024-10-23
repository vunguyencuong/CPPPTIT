#include<bits/stdc++.h>
using namespace std;

int bsearch(vector<int> a, int l, int r, int x)
{
    while(l <= r)
    {
        int pivot = (l+r)/2;
        if(a[pivot] == x) return 1;
        else if(a[pivot] > x)
        {
            r = pivot-1;
        }
        else if(a[pivot] < x) l = pivot+1;
    }
    return -1;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n, x; cin>> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>> a[i];
        cout<< bsearch(a,0,n-1,x) << endl;
    }
}