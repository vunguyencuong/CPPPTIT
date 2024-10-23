#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];

bool check1()
{
    for(int i = 1; i <= n-1; i++)
    {
        if(a[i] == a[i+1] && a[i+1] == 1) return false;
    }
    return true;
}

bool check2()
{
    if(a[1] == 1 && a[n] == 0) return true;
    else return false;
}

void in()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 1) cout<< 'H';
        else cout<< 'A';
    }
    cout<< endl;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check1() && check2()) in();
        }
        else Try(i+1);
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        Try(1);
    }
}