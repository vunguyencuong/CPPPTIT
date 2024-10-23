#include<bits/stdc++.h>
using namespace std;
int len,n,k;
int a[25];
int id[25];

void in()
{
    for(int i = 1; i <= k; i++)
    {
        cout<< a[id[i]] << " ";
    }
    cout<< endl;
}

void Sinh(int i)
{
    for(int j = id[i-1] + 1; j <= n-k+i; j++)
    {
        id[i] = j;
        if(i == k) in();
        else Sinh(i+1);
    }
}

int main()
{
    cin>> len >> k;
    int res[len+5];
    n = 1;
    for(int i = 1; i <= len; i++)
    {
        cin>> res[i];
    }
    sort(res+1,res+len+1);
    a[n] = res[1];
    n++;
    for(int i = 2; i <= len; i++)
    {
        if(a[n-1] != res[i])
        {
            a[n] = res[i];
            n++;
        }
    }
    n--;
    //for(int i = 1; i <= n; i++) cout<< a[i];
    Sinh(1);
}