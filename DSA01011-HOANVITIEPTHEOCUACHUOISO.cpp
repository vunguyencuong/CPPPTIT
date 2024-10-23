#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int test;
        string s;
        vector<char> a;
        cin>> test;
        cin.ignore();
        cin>> s;
        for(int i = 0; i < s.length(); i++)
        {
            a.push_back(s[i]);
        }
        if(next_permutation(a.begin(),a.end()))
        {
            cout<< test << " ";
            for(char i : a) cout<< i;
            cout<< endl;
        } else cout<< test << " BIGGEST" << endl;
    }
}