#include<bits/stdc++.h>
using namespace std;
int a[100];
void Cout(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< a[i];
    }
    cout<< " ";
}
void Change(int a[], int n, int pos)
{
    for(int i = pos; i < n; i++)
    {
        a[i] = 0;
    }
}
void Sinh()
{
    int n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    Cout(a,n);
    int i = n-1;
    while(i)
    {
        if(a[i] == 1) i--;
        if(a[i] == 0)
        {
            a[i] = 1;
            Change(a,n,i+1);
            Cout(a,n);
            i = n-1;

        }
    }
}


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        Sinh();
        cout<< endl;
    }
}