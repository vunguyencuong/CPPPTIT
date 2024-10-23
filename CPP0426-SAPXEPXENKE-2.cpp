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
        vector<int> b(n);
        for(int i = 0; i < n; i++) 
        {
            cin>> a[i];
            b[i] = a[i];
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            cout<< b[i] << " ";
            count++;
            if(count == n) break;
            cout<< a[i] << " ";
            count++;
            if(count == n) break;
        }
        cout<< endl;
    }
}