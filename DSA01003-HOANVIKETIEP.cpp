#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>> a[i];
        if(next_permutation(a.begin(),a.end())){
            for(int i = 0; i < n; i++)
            {
                cout<< a[i] << " ";
            }
        }
        else for(int i = 1; i <= n; i++) cout<< i << " ";
        cout<< endl;
    }
}