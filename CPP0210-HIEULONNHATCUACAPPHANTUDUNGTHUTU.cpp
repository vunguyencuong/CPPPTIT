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
        int a[n+5]={};
        for(int i = 0; i < n; i++) cin>> a[i];
        int max = -100;
        int check = 0;
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(a[i] < a[j])
                {
                    check = 1;
                    int hieu = a[j] - a[i];
                    if(max < hieu) max = hieu;
                }
            }
        }
        if(check == 1) cout<< max << endl;
        else cout<< -1 << endl;
    }
}