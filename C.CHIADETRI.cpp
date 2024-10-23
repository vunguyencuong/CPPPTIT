#include<bits/stdc++.h>
using namespace std;
 long long a[100];

char Fibo(int n, long long k)
{
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= a[n-2]) return Fibo(n-2,k);
    return Fibo(n-1,k-a[n-2]);
}

int main()
{
    int t;
    cin>> t;
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i <= 93; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    while(t--)
    {
        int n;
        long long k;
        cin>> n >> k;
        cout<< Fibo(n,k) << endl;

    }
}