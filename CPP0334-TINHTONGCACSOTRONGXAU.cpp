#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string res = "";
        string s; cin>> s;
        int ans = 0;
        int len = s.length();
        int i = 0;
        while(i <= len)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                res += s[i];
            }
            if(s[i] >= 'a' && s[i] <= 'z'|| s[i] == NULL)
            {
                if(res != "") ans += stoi(res);
                res = "";
            }
            i++;
        }
        cout<< ans << " " << endl;
    }
}