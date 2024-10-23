#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.length();
    while(s[0] == ' ') s.erase(0,1);
    while(s[len-1] == ' ') s.erase(len-1,1);
    while(s.find("  ") != -1) s.erase(s.find("  "),1);
    len  = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    int pos = 0;
    for(int i = len-1; i >= 0; i--)
    {
        if(s[i] == ' ')
        {
            pos = i;
            break;
        }
    }
    for(int i = pos+1; i < len; i++) s[i] -= 32;
    s[0] -= 32;
    for(int i = 0; i < pos; i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ') s[i+1] -= 32;
    }
    for(int i = 0; i < pos; i++) cout<< s[i];
    cout<< ", ";
    for(int i = pos+1; i < len; i++) cout<< s[i];
}   
  