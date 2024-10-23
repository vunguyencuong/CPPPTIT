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
        for(int i = 2; i*i <= n; i++)
        {
            int count = 0;
            while(n % i == 0)
            {
                n /= i;
                count++;
            }
            if(count > 0)
            {
                cout<< i << " " << count << " ";
            }
        }
        if(n > 1) cout<< n << " " << 1;
        cout<< endl;
    }
}