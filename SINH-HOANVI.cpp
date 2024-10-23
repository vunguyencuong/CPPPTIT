#include<bits/stdc++.h>
using namespace std;

void First(int a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void Sinh(int a[], int n, int &check)
{
     int i = n-1;
     while(i > 0 && a[i] > a[i+1])i--;
     if(i > 0)
     {
         int k = n;
         while(a[i] > a[k])k--;
         int tmp = a[i];
         a[i] = a[k];
         a[k] = tmp;
         int l = i+1, r = n;
         while(l <= r)
         {
             int tmp = a[l];
             a[l] = a[r];
             a[r] = tmp;
             l++,r--;
         }
     }
     else check = 0;
}

void Cout(int a[], int n)
{
    for(int i  =1 ; i <= n; i++)
    {
        cout<< a[i];
    }
    cout<< endl;
}

int main()
{
    int a[1000];
    int n;
    cin>> n;
    First(a,n);
    int check = 1;
    while(check)
	{
        Cout(a,n);
		Sinh(a,n,check);
	}
    return 0;
}
