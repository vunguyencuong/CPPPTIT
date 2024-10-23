#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>> s;
        int tanso[150]={0};
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            tanso[(int)s[i]]++;
        }
        for(int i = 0; i < len; i++)
        {
            if(tanso[s[i]] > 0)
            {
                cout<< s[i] << tanso[s[i]];
                tanso[s[i]] = 0;
            }
        }
        cout<< endl;
    }
}