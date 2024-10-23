#include<bits/stdc++.h>
using namespace std;
int countnum(int n)
{
    if(n >= 1 && n <= 9) return 1;
    int count = 0;
    while(n)
    {
        n /= 10;
        count++;
    }
    return count;
}
void SortArr(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}
int Sortnums(int n)
{
    int check = 0;
    if(n < 0)
    {
        check = 1;
        n = -n;
    }
    int arr[10000];
    int len = countnum(n);
    for(int i = 1; i <= len; i++)
    {
        arr[i] = n%10;
        n /= 10;
    }
    SortArr(arr,len);
    if(check == 1)
    {
        int pos;
        for(int i = len; i >= 1; i--)
        {
            if(arr[i] != 0)
            {
                pos = i;
                break;
            }
        }
        for(int i = pos; i <= len; i++)
        {
            n = n*10 + arr[i];
        }
        for(int i= pos-1; i >= 1; i--)
        {
            n = n*10 + arr[i];
        }
        n = -n;
        /*if(arr[len] != 0)
        {
            for(int i = len; i >= 1; i--)
            {
                n = n*10 + arr[i];
            }
            n = -n;
        }
        else
        {
            for(int i = 1; i <= len; i++)
            {
                n = n*10+arr[i];
            }
            n = -n;
        }
        */
    }
    else
    {
        for(int i = 1; i <= len; i++)
        {
            n = n*10 + arr[i];
        }
    }
    return n;
    
}



int main()
{
    int n;
    cin>> n;
    int a[10000];
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        a[i] = Sortnums(a[i]);
    }
    SortArr(a,n);
    for(int i = 1; i <= n; i++)
    {
        cout<< a[i] << " ";
    }
}
