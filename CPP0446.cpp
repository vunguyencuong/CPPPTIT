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
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        int min = 9999999;
        for(int i = 0; i < n-1; i++)
        {
            for(int j  =i+1; j < n; j++)
            {
                if(abs(min) > abs(a[i]+a[j]))
                {
                    min = a[i] + a[j];
                }
            }
        }
        cout<< min << endl;
    }  

        
}



