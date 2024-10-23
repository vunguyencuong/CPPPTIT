#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[105];
int id[105];
int ans = 0;
bool check(){
    for(int i = 1; i < k; i++)
    {
        if(a[id[i]] > a[id[i+1]]) return false;
    }
    return true;
}

void Try(int i)
{
    for(int j = id[i-1]+1; j <= n-k+i; j++)
    {
        id[i] = j;
        if(i == k)
        {
            if(check()) ans++;
        }
        else Try(i+1);
    }
}

int main()
{
    cin>> n >> k;
    for(int i = 1; i <= n; i++) cin>> a[i];
    Try(1);
    cout<< ans << endl;
}