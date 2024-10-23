#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
int id[20];
int check[10005];
void in()
{
    for(int i = 1; i <= n; i++)
    {
        cout<< a[id[i]] << " ";
    }
    cout<< endl;
}

void Sinh(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!check[j])
        {
            id[i] = j;
            check[j] = true;
            if(i == n)
            {
                in();
            }
            else Sinh(i+1);
            check[j] = false;
        }
    }
}

int main()
{
    cin>> n;
    for(int i = 1; i <= n; i++) cin>> a[i];
    sort(a+1,a+n+1);
    Sinh(1);
}