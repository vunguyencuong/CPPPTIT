#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
   // Sang();
    int a,b;
    cin>> a >> b;
    if(a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int count = 0;
    int num[100000];
    for(int i = a; i <= b; i++)
    {
        if(check(i)) num[count++] = i;
    }
    for(int i = 0; i < count; i++)
    {
        if(i < count-1) cout<< num[i] <<" ";
        else cout<< num[i];
    }
}