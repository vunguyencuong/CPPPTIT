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
        int a[10000];
        for(int i = 1; i <= k; i++)
        {
            cin>> a[i];
        }
        int i = k;
        int check = 1;
        while(i > 0 && a[i] == n-k+i) i--;
        a[i]++;
        if(i > 0)
        {
            for(int j = i+1; j <= n; j++)
            {
                a[j] = a[j-1] + 1;
            }
        }
        else check = 0;
        if(check == 1)
        {
            for(int i = 1; i <= k; i++)
            {
                cout<< a[i] << " ";
            }
        }
        else
        {
            for(int i = 1; i <= k; i++)
            {
                cout<< i << " ";
            }
        }    
        cout<< endl;
    }
}