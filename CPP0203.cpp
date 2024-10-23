#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000001];
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        for(int i = 0; i < 1000001; i++) a[i] = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>> x;
            if(x >= 0) a[x] = 1;
        }
        for(int i = 1; i < 1000001; i++)
        {
            if(a[i] < 1)
            {
                cout<< i << endl;
                break;
            }
        }
    }
}