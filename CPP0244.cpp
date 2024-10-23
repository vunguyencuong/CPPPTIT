#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int tanso[1005] = {0};
    for(int i = 0 ;i < n; i++)
    {
        int x;
        cin>> x;
        tanso[x]++;
    }
    for(int i = 0; i <= 1000; i++)
    {
        if(tanso[i] >= 1) cout<< i << " ";
    }
}