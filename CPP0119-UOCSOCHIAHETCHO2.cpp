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
        int count = 0;
        if(n < 2) cout<< 0 << endl;
        else if(n == 2) cout<< 1 << endl;
        else
        {
            for(int i = 1; i <= sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    if(i % 2 == 0)
                    {
                        if((n/i)%2 == 0 && i != n/i) count+=2;
                        else count++;
                    }
                    else
                    {
                        if((n/i)%2 == 0) count++;
                    }
                }
            }
            cout<< count << endl;
        }
    }
}