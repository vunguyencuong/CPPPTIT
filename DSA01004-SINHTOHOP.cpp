#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];

void BackTrack(int i)
{
    for(int j = a[i-1]+1 ; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i == k)
        {
            for(int l = 1; l <= k;l++)
            {
                cout<< a[l];
            }
            cout<< " ";
        }
        else BackTrack(i+1);
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n >> k;
        BackTrack(1);
        cout<< endl;
    }
}