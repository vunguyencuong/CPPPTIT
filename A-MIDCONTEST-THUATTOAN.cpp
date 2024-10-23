#include<bits/stdc++.h>
using namespace std;
struct data
{
    int num;
    int hieu;
};

bool cmp(data a , data b)
{
    if(a.hieu < b.hieu) return true;
    else return false;
}

int main()
{
    int n,q;
    cin>> n >> q;
    int a[n+5];
    for(int i = 0 ; i < n; i++)
    {
        cin>> a[i];
    }
    sort(a,a+n);
    while(q--)
    {
        int x,k;
        cin>> x >> k;
        vector<data> v;
        int  index = lower_bound(a,a+n,x) - a;
        int e = index, f = index;
        //cout<< index;
        if(index - k -1 < 0) e = 0;
        else e -= k+1;
        if(index + k + 1  > n-1) f = n-1;
        else f = index + k + 1;
        for(int i = e; i <= f;i++)
        {
            struct data b;
            b.num = a[i];
            b.hieu = abs(a[i]-x);
            v.push_back(b);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i = 0; i < k; i++)
        {
            cout<< v[i].num << " ";
        }
        cout<< endl;
    
    }
}
