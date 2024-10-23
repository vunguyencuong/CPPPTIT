#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>> s;
    int stepmax = 0;
    int L = 0,R = 0;
    int Lmax = 0, Rmax = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L')
        {
            L++;
            Lmax++;
            if(Lmax-R > stepmax) stepmax = Lmax-R;
        }
        else if(s[i] == 'R')
        {
            R++;
            Rmax++;
            if(Rmax - stepmax) stepmax = Rmax-L;
        }
        else
        {
            Lmax++;
            if(Lmax-R > stepmax) stepmax = Lmax-R;
            Rmax++;
            if(Rmax-L > stepmax) stepmax = Rmax-L;
        }
    }
 
    cout<< stepmax ;
 
    return 0;
} 
