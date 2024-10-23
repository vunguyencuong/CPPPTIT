#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n+5]={};
        for(int i = 0; i < n; i++) cin>> a[i];
        ll max = 0;
        for(int i = 0; i < n; i++)
        {
            ll num = 1;
            for(int j = i; j < n; j++)
            {
                num *= a[j];
                if(max < num) max = num;
            }
        }
        cout<< max << endl;
    }
}