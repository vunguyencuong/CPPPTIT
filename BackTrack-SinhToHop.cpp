#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int th[100];

void BackTrack(int i)
{
    for(int j = th[i-1]+1 ; j <= n-k+i; j++)
    {
        th[i] = j;
        if(i == k)
        {
            for(int l = 1; l <= k;l++)
            {
                cout<< th[l];
            }
            cout<< " ";
        }
        else BackTrack(i+1);
    }
}

int main()
{
    cin>> n >> k ;
    BackTrack(1);
}