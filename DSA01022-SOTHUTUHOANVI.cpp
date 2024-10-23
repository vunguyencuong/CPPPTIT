#include<bits/stdc++.h>
using namespace std;
int n, a[20];
int x[20];
int ans;
bool check[20];
bool ok()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != x[i]) return false;
    }
    return true;
}

void Sinh(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!check[j])
        {
            a[i] = j;
            check[j] = true;
            if(i == n)
            {
                if(ok())
                {
                    cout<< ans << endl;
                }
                else ans++;
            }
            else Sinh(i+1);
            check[j] = false;
        }
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        ans = 1;
        for(int i = 1; i <= n; i++) cin>> x[i];
        Sinh(1);
    }
}