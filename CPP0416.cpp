#include<bits/stdc++.h>
using namespace std;

int Binary(int a[], int x, int n)
{
    int l = 0;
    int r = n-1;
    while(l <= r)
    {
        int pivot = (l+r)/2;
        if(a[pivot] == x) return 1;
        else if(a[pivot] > x) r = pivot-1;
        else if(a[pivot] < x) l = pivot+1;
    }
    return 0;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        int a[105];
        for(int i = 0; i < n; i++) cin>> a[i];
        sort(a,a+n);
        int count = 0;
        int m;
        if(n % 2 == 0) m = n/2;
        else m = n/2+1;
        for(int i = 0; i < m; i++)
        {
            count += Binary(a,k-a[i],n);
        }
        cout<< count << endl;
    }
}