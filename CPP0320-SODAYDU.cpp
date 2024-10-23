#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        bool check[10] = {false};
        int ans = 1;
        int num = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                check[s[i]-'0'] = true;
                num ++;
            }
        }
        if(s[0] == '0' || num != s.length()) cout<< "INVALID" << endl;
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                {
                    check[s[i]-'0'] = true;
                }
            }
            for(int i = 0; i < 10; i++)
            {
                if(!check[i])
                {
                    ans = 0;
                    break;
                }
            }
            if(ans == 1) cout<< "YES" << endl;
            else cout<< "NO" << endl;
        }
    }
}