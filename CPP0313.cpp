#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s1;
    getline(cin,s);
    getline(cin,s1);
    while(s.find(s1) != -1) s.erase(s.find(s1),s1.length());
    while(s[0] == ' ') s.erase(0,1);
    cout<< s;
}