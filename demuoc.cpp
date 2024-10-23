#include <bits/stdc++.h>
using namespace std;
bool scp(long long n)
{
    long long t=sqrt(n);
    if(t*t==n) return true;
    return false;
}

int main()
{
    int n,res=0,res1=0;
    cin>>n;
    long long a[100005];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(scp(a[i]))
            res++;
        else res1++;
    }
    cout<<res1<<endl<<res;
}
