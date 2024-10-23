#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string s1 = "@ptit.edu.vn";
    int pos;
    for(int i = 0; i < s.length(); i++) 
    {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    for(int i = s.length(); i>= 0; i--)
    {
        if(s[i] == ' ')
        {
            pos = i;
            break;
        }
    }
    for(int i = pos+1; i < s.length(); i++) cout<< s[i];
    cout<< s[0];
    for(int i = 0; i < pos; i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ') cout<< s[i+1];
    }
    cout<< s1;
}