#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int binary(ll a[],int n , int k)
{
    int left = 0, right = n;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (a[mid] == k) return mid;
        if (a[mid] < k) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        ll n,k;
        cin>> n >> k;
        ll a[n+5];
        for(int i = 1; i <= n; i++)
        {
            cin>> a[i];
        }
        if(binary(a,n,k) > 0) cout<< binary(a,n,k);
        else cout<< "NO";
        cout<< endl;
    }
}