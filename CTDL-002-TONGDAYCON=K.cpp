#include<bits/stdc++.h>
using namespace std;
int n,k,a[50];
int x[50], dem = 0;
void in()
{
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(x[i]) res += a[i];
    }
    if(res == k)
    {
        dem++;
        for(int i = 1; i <= n; i++)
        {
            if(x[i]) cout<< a[i] << " ";
        }
        cout<< endl;
    }
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if(i < n) Try(i+1);
        else in();
    }
}

int main()
{
    cin>> n >> k;
    for(int i = 1; i <= n; i++) cin>> a[i];
    Try(1);
    cout<< dem << endl;
}