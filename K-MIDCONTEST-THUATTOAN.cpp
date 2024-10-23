#include<bits/stdc++.h>
using namespace std;
int a[1000000+5];

int main()
{
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i];
    }
    int left, right;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i+1])
        {
            left = i;
            break;
        }
    }
    for(int i = n; i >= 1; i--)
    {
        if(a[i] < a[i-1])
        {
            right = i;
            break;
        }
    }
    int max = 0;
    int min = 10000000;
    for(int i = left; i <= right; i++)
    {
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }
    for(int i = n; i >= 1; i--)
    {
        if(max >= a[i])
        {
            right = i;
            break;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(min < a[i])
        {
            left = i;
            break;
        }
    }
    cout<< left << " " << right;
}