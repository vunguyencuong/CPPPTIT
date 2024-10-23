#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        vector<int> tanso(1000000+5,0);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            tanso[a[i]]++;
            if(tanso[a[i]] == 2)
            {
                ans = a[i];
                break;
            }
        }
        cout<< ans << endl;

    }
}