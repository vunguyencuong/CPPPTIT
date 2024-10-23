#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int len = s.length();
        int i = len;
        for(int i = len-1; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                s[i] = '1';
                break;
            }
            else s[i] = '0';
        }
        cout<< s;
        cout<< endl;
    }
}