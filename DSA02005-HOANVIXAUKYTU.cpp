#include<bits/stdc++.h>
using namespace std;
int n;
string res;
int a[20];
bool check[20];
void in()
{
    for(int i = 1; i <= n; i++)
    {
        cout<< res[a[i]-1];
    }
    cout<< " ";
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!check[j])
        {
            a[i] = j;
            check[j] = true;
            if(i == n)
            {
                in();
            }
            else Try(i+1);
            check[j] = false;
        }
    }
}

int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        cin>> res; n = res.length();
        Try(1);
        cout<< endl;
    }
}