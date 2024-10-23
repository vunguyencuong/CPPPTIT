#include<bits/stdc++.h>
using namespace std;
vector<bool> check(1e6,true);

void snt()
{
    check[0] = check[1] = false;
    for(int i = 2; i*i <= 1e6; i++)
    {
        if(check[i] == true)
        {
            for(int j = 2*i; j <= 1e6; j+= i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    snt();
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int have = 0;
        for(int i = 2; i <= n; i++)
        {
            if(check[i])
            {
                if(check[n-i])
                {
                    cout<< i << " " << n-i << endl;
                    have = 1;
                    break;
                }
            }
        }
        if(have == 0) cout<< -1 << endl;
     }
}