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
        int len = s.length();
        int check = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i] != s[len-1-i])
            {
                check = 1;
                break;
            }
        }
        if(check == 1) cout<< "NO" << endl;
        else cout<< "YES" << endl;
    }
}