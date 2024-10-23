#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        int len = s.length();
        int check = 0;
        for(int i = len-1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                check = 1;
                s[i] = '0';
                for(int j = i+1; j < len; j++) s[j] = '1';
                break;
            }
        }
        if(check == 0)
        {
            for(int i = 0; i < len; i++) cout<< '1';
        } else cout<< s;
        cout<< endl;
    }
}