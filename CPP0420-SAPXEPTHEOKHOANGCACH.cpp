#include<bits/stdc++.h>
using namespace std;

struct data
{
    int value;
    int hieu;
    int pos;
};
bool cmp(data a, data b)
{
    if(a.hieu == b.hieu) return a.pos < b.pos;
    if(a.hieu < b.hieu) return true;
    else return false;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,x;
        cin>> n >> x;
        vector<int> a(n);
        vector<data> v(n);
        for(int i = 0; i < n; i++)
        { 
            cin>> a[i];
            v[i].value = a[i];
            v[i].hieu = abs(a[i]-x);
            v[i].pos = i;
        }
        sort(v.begin(),v.end(),cmp);
        for(int i = 0; i < n; i++)
        {
            cout<< v[i].value << " "; 
        }
        cout<< endl;
    }
}