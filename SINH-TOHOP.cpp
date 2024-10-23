#include<bits/stdc++.h>
using namespace std;
int a[100];
int n,k;
void Sinh(int &check)
{
    int i =k;
    while(i > 0 && a[i] == n-k+i) i--;
    a[i]++;
    if(i > 0)
    {
        for(int j = i+1; j <= n; j++)
        {
            a[j] = a[j-1] +1 ;
        }
    }
    else check = 0; // da tim dc to hop cuoi cung 
}

void Cout()
{
    for(int i = 1; i <= k ;i++)
    {
        cout<< a[i];
    }
    cout<< endl;
}

int main()
{
    cin>> n >> k;
    int check = 1;
    for(int i = 1; i <= n; i++) a[i] = i;
    while(check)
    {
        Cout();
        Sinh(check);
    }
    return 0;
}
