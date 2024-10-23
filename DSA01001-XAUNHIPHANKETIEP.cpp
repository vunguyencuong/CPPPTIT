#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        string s; getline(cin,s);
        int res = s.length();
        int check = 0;
        for(int i = res-1; i >= 0; i--)
        {
            if(s[i] == '0')
            { 
                check = 1;
                s[i] = '1';
                for(int j = i+1; j < res; j++)
                {
                    s[j] = '0';
                }
                break;
            }
        }
        if(check != 0)
        {
            for(int i = 0; i < res; i++) cout<< s[i];
            cout<< endl;
        }
        else 
        {
            for(int i = 0; i < res; i++) cout<< "0";
            cout<< endl;
        }
    }
}