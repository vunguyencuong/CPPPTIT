#include<bits/stdc++.h>
using namespace std;

bool isalpha(char c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return true;
    else return false;
}
int main()
{
    string s;
    cin>> s;
    stack<char> w;
    int len = s.length();
    for(int i = 0; i < len ;i++)
    {
        if(isalpha(s[i])) w.push(s[i]); 
    }
    while(!w.empty())
    {
        cout<< w.top();
        w.pop();
    }
    cout<< endl;
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= '0' && s[i] <= '9') cout<< s[i];
    }
}