#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n, k; cin>> n >> k;
        int ans = 0;
        int a[k+5] = {};
        int ts[50] = {0};
        for(int i = 1; i <= k; i++){
            cin>> a[i];
            ts[a[i]]++;
        } 
        int i = k; bool stop = false;
        while(i > 0 && a[i] == n-k+i) i--;
        if(i == 0) stop = true;
        else{
            a[i]++;
            for(int j = i+1; j <= k; j++)
            {
                a[j] = a[j-1] + 1;
            }
        }
        if(stop) cout<< k;
        else
        {
            for(int i = 1; i <= k; i++)
            {
                if(ts[a[i]] == 0) ans++;
            }
            cout<< ans;
        }
        cout<< endl;
    }
}