#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        int len = 1;
        int num[10000];
        for(int i = 2; i*i <= n; i++)
        {
            while(n % i == 0)
            {
                n /= i;
                num[len++] = i;
            }
        }
        if(n > 1) num[len++] = n;
       // cout<< len << endl;
        if(k > len-1) cout<< -1 << endl;
        else cout<< num[k] << endl;
    }
}
