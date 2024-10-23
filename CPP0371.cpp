#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    char na[7] = {'a','e','i','o','u','y'};
    for(int i = 0; i < 6; i++)
    {
       while(s.find(na[i]) != -1)
       {
           s.erase(s.find(na[i]),1);
       } 
    }
    for(int i = 0; i < s.length(); i++)
    {
        cout<< '.' << s[i];
    }

}