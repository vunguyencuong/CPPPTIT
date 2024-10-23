#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int count = 0;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
                count++;
            }
            cout<< i << " " << count << endl;
            count = 0;
        }
    }
    if(n != 1) cout<< n << " " << 1 << endl;
}