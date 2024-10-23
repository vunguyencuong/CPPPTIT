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
        int check = 0;
        for(int i = 0; i < len-1; i++)
        {
            if(abs(s[i]-s[i+1]) != 1)
            {
                check = 1;
                break;
            }
        }
        if(check == 1) cout<< "NO" << endl;
        else cout<< "YES" << endl;
    }
}