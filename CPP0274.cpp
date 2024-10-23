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
        vector<int> v(n);
        vector<int> tanso(1000001,0);
        for(int i = 0; i < n; i++)
        {
            cin>> v[i];
            tanso[v[i]]++;
        }
        int sum = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(tanso[v[i]] > 1)
            { 
                sum += tanso[v[i]];
                tanso[v[i]] = 0;
            }
        }
        cout<< sum << endl;
    }
}