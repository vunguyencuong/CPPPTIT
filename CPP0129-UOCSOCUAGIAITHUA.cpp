#include<bits/stdc++.h>
using namespace std;
int n,p;
int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n >> p;
        int x = 0, m;
        for(int i = 2; i <= n; i++)
        {
            m = i;
            while(m % p == 0)
            {
                x++;
                m /= p;
            }
        }
        cout<< x << endl;
    }
}