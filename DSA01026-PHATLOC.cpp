#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
bool check()
{
    if(a[1] != 1 || a[n] != 0) return false;
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i+1] && a[i] == 1) return false;
    }
    for(int i = 1; i < n-2; i++)
    {
        if(a[i] == 0 && a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0) return false;
    }
    return true;
}

void in()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0) cout<< '6';
        else cout<< '8';
    }
    cout<< endl;
}

void Sinh(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check()) in();
        }
        else Sinh(i+1);
    }
}

int main()
{
    cin>> n;
    Sinh(1);
}