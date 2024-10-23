#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[100005];
        int tanso[100005] = {0};
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            tanso[a[i]]++;
        }
        int count  =0;
        sort(a,a+n);
        for(int i = a[0]; i <= a[n-1]; i++)
        {
            if(tanso[i] == 0) count++;
        }
        cout<< count << endl;
    }
}