#include<bits/stdc++.h>
using namespace std;
int a[25][25];
int n,res = 1e9+5;
bool check[100]={false};

void solve(int i, int dem , int sum)
{
    if(dem == n)
    {
        res = min(res, sum + a[i][1]);
    }
    else
    {
        for(int j = 2; j <= n; j++)
        {
            if(!check[j])
            {
                check[j] = true;
                if(sum + a[i][j] < res)
                {
                    solve(j,dem+1,sum+a[i][j]);
                }
                check[j] = false;
            } 
        }
    }
}


int main()
{
    cin>> n;
    for(int i = 1; i <= n ;i++)
    {
        for(int j = 1;j <= n; j++)
        {
            cin>> a[i][j];
        }
    }
    check[1] = true;
    solve(1,1,0);
    cout<< res << endl;
}