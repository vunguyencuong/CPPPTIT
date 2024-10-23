#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int ts[1005] = {0};
        int x;
        for(int i = 0; i < n; i++)
        {
            cin>> x;
            ts[x]++;
        }
        cout<< ts[0] << endl;
    }
}