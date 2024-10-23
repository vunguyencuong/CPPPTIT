#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e3+5;
int a[nmax]={};
int n;
void Cout()
{
    for(int i = 1; i <= n; i++) cout<< a[i];
    cout<< " ";
}
void Sinh(int &check)
{
    int i = n-1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if(i > 0)
    {
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i], a[k]);
        int l = i+1, r = n;
        while(l <= r)
        {
            swap(a[l],a[r]);
            l++,r--;
        }
    }
    else check = 0;
}
void Next(int check)
{
    while(check)
    {
        Cout();
        Sinh(check);
    }
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        cin>> n;
        for(int i = 1; i <= n; i++) a[i] = i;
        Next(1);
        cout<< endl;
    }
}