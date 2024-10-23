#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e5+5;
vector<bool> check(nmax,true);
void snt()
{
    check[0] = check[1] = false;
    for(int i = 2; i*i < nmax; i++)
    {
        if(check[i])
        {
            for(int j = i*2; j < nmax; j+=i)
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
        int l,r; cin>> l >> r;
        int count = 0;
        for(int i = l; i <= r; i++)
        {
            if(check[i]) count++;
        }
        cout<< count << endl;
    }
}