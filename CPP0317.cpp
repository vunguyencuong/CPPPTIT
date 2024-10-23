#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool tn(string s)
{
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] != s[len-i-1]) return false;
    }
    return true;
}

bool csc(string s)
{
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] % 2 == 1) return false;
    }
    return true;
}

int main()
{
    faster();
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        if(tn(s) == true && csc(s) == true) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
}