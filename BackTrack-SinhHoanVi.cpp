#include<bits/stdc++.h>
using namespace std;
int n;
int hv[100];
bool check[100];

void BackTrack(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!check[j])
        {
            hv[i] = j;
            check[j] = true;
            if(i == n)
            {
                for(int k = 1; k <= n; k++)
                {
                    cout<< hv[k];
                }
                cout<< " ";
            }
            else BackTrack(i+1);
            check[j] = false;
        }
    }
}

int main()
{
    cin>> n;
    BackTrack(1);
}