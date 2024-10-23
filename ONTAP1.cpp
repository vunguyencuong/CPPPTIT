#include<bits/stdc++.h>
using namespace std;
int n;
int np[100] = {0};

void solve(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        np[i] = j;
        if(i == n)
        {
            for(int k = 1; k <= n; k++)
            {
                cout<< np[k];
            }
            cout<< endl;
        }
        else solve(i+1);
    }
}

int main()
{
    cin>> n;
    solve(1);
}