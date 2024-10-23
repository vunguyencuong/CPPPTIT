#include<bits/stdc++.h>
using namespace std;
typedef long l;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        l n;
        cin>> n;
        vector<l> a;
        for(int i = 0; i < n; i++)
        {
            l x;
            cin>> x;
            a.push_back(x);
        }
        int check = 0;
        sort(a.begin(),a.end());
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(a[i] != a[j])
                {
                    check = 1;
                    break;
                }
            }
        }
        if(check == 1)
        {
            cout<< a[0] << " ";
            for(int i =1; i < n; i++)
            {
                if(a[i] != a[0])
                {
                    cout<< a[i] << endl;
                    break;
                }

            }
        }
        else cout<< -1 << endl;
    }
}