#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        int a[k+1];
        for(int i = 1; i <= k; i++) cin>> a[i];
        int pos = k-1;
        while(a[pos]+1 == a[pos+1] && pos > 0) pos--;
        if(pos == 0)
        {
            for(int i = n-k+1; i <= n; i++) cout<< i << " ";
        }
        else{
            pos++;
            a[pos]--;
            for(int i = k; i > pos; i--) a[i] = n-k+i;
            for(int i = 1; i <= k; i++) cout<< a[i] << " ";
        }
        cout<< endl;
    }
}