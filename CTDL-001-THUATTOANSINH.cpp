#include<bits/stdc++.h>
using namespace std;

int n, a[50];

void in()
{
    for(int i = 1; i <= n; i++) cout<< a[i] << " ";
    for(int i = n; i >= 1; i--) cout<< a[i] << " ";
    cout<< endl;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i < n) Try(i+1);
        else in();
        
    }
}

int main()
{
    cin>> n;
    n /= 2;
   // cout<< n << endl;
    Try(1);
}