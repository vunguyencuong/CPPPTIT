#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e3+5;
int a[nmax]={};
int n,k;
void Sinh(int &check)
{
    int i = k;
    while(i > 0 && a[i] == n-k+i) i--;
    a[i]++;
    if(i > 0)
    {
        for(int j = i+1; j <= n; j++) a[j] = a[j-1]+1;
    }
    else check = 0; // đã tìm được tổ hợp cuối cùng
}
void Cout()
{
    for(int i = 1; i <= k; i++)
    {
        cout<< a[i];
    }
    cout<< " ";
}
void Next(int check)
{
    for(int i = 1; i <= n; i++) a[i] = i;
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
        cin>> n >> k;
        Next(1);
        cout<< endl;
    }
}