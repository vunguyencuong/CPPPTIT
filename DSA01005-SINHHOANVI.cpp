#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            a[i] = i+1;
            cout<< i+1;
        } 
        cout<< " ";
        while(next_permutation(a.begin(),a.end()))
        {
            for(int i = 0; i < n; i++) cout<< a[i];
            cout<< " ";
        }
        cout<< endl;
    }
}