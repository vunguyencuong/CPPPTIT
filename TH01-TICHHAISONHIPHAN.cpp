#include<bits/stdc++.h>
using namespace std;

long long toNum(string s)
{
    long long number = 0;
    long long solve = 1;
    int len = s.length()-1;
    for(int i = 0; i < len+1; i++)
    {
        if(s[i] == '1')
        {
            for(int j = 0; j < len-i; j++) solve *= 2;
            number += solve;
            solve = 1;
        }
        
    }
    return number;
}

int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        cin>> s1 >> s2;
        //cout<< toNum(s1) << " " << toNum(s2) << endl;
        cout<< toNum(s1)*toNum(s2) << endl;
    }
}