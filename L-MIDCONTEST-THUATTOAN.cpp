#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>> n >> k;
    int a[100000+5];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    sort(a,a+n);
    long long  count = 0;
    for(int i = 0; i < n; i++)
    {
        auto search = a[i] + k; 
        auto res = lower_bound(a+i+1,a+n,search);
        if(res != a+n) count += res - (a+i+1);
        else if(res == a+n )  count += n-i-1;
       // if(*res == search) count--;
    }
    cout<< count;
}