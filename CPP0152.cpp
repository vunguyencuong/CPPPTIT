#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int a,m;
        cin>> a >> m;
        int check = -1;
        for(int i = 0; i < m; i++)
        {
            if((a*i)%m == 1)
            {
                check = i;
                break;
            }
        }
        cout<< check << endl;
    }
}
