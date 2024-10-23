#include<bits/stdc++.h>
using namespace std;

int Binary(vector<int> a, int n, int x)
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
    return -1;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,x;
        cin>> n >> x;
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int m;
            cin>> m;
            a.push_back(m);
        }
        cout<< Binary(a,n,x) << endl;
    }
}