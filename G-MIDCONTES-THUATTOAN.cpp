#include<bits/stdc++.h>
using namespace std;
int a[1000000+5];

int main()
{
    int n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    int left[n] = {0};
    int right[n] = {0};
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i-1])
        {
            left[i] += left[i-1] + 1;
        }
    }
    for(int i = n-2; i >= 0; i--)
    {
        if(a[i] > a[i+1])
        {
            right[i] += right[i+1] + 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<< left[i] + right[i] + 1 << " ";
    }

}