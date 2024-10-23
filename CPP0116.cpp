#include<bits/stdc++.h>
using namespace std;

bool snt(int n)
{
    if(n <  2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        cout<< 1 << " ";
        for(int i = 2; i <= n; i++)
        {
            if(i % 2 == 0) cout<< 2 << " ";
            else if(snt(i)) cout<< i << " ";
            else 
            {
                    for(int j = 3;; j+=2)
                {
                    if(i % j == 0 && snt(j))
                    {
                        cout<< j << " ";
                        break;
                    }
                }
            }
        }
        cout<< endl;
    }
}