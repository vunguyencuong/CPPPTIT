#include<bits/stdc++.h>
using namespace std;
int a[1000000];


int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&a[i]);
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int k;
        scanf("%d",&k);
        int pos = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] <= k)
            {
                pos = i;
                break;
            }
        }
        cout<< pos << endl;
    }
}