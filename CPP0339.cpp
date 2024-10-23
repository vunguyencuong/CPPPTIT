#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>> s;
        int len = s.length();
        int tanso[130] = {0};
        for(int i= 0; i < len; i++)
        {   
            tanso[(int)s[i]] ++;
        }
        int count = 0;
        for(int i =0; i < 130; i++)
        {
            if(tanso[i] > 1) count += tanso[i]*(tanso[i]-1)/2;
        }
        cout<< count+len << endl;
    }
}