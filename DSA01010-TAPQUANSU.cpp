#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        int a[30] = {};
        int old[30] = {};
        map<int, int> ts;
        for(int i = 1; i <= k; i++){
            cin>> old[i];
            a[i] = old[i];
            ts[old[i]]++;
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
        if(stop) cout<< k << endl;
        else{
            int count = 0;
            for(int i = 1; i <= k; i++)
            {
               if(ts[a[i]] == 0) count++;
            }
            cout<< count << endl;
        }

    }
}