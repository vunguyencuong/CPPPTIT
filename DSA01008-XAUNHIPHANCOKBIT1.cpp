#include<bits/stdc++.h>

using namespace std;

int n,k;
int a[50];

bool check()
{
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 1) count++;
    }
    if(count == k) return true;
    else return false;
}

void in()
{
    for(int l = 1; l <= n; l++) cout<< a[l];
    cout<< endl;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check()) in();
        }
        else Try(i+1);
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n >> k;
        Try(1);
    }
}