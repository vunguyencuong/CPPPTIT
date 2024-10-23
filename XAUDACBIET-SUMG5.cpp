#include<bits/stdc++.h>
using namespace std;
bool check[26] = {false};

int solve(string s,int i, int NA, int PA, bool hasL)
{
    if(NA == 3 || PA == 3) return 0;

    for(;i < s.length() && s[i] != '_'; i++)
    {
        if(check[s[i]-'A']) ++NA, PA = 0;
        else NA = 0, ++PA;
        if(NA == 3 || PA == 3) return 0;
    }
    if(s[i] != '_')
    {
        if(hasL) return 1;
        else return 0;
    }
    return solve(s,i+1,NA+1,0,hasL)*5
            + solve(s,i+1,0,PA+1,true)
            + solve(s,i+1,0,PA+1,hasL)*20;
}


int main()
{
    check['A'-'A'] = check['E'-'A'] = check['I'-'A'] = check['O'-'A'] = check['U'-'A'] = true;
    string s;
    cin>> s;
    bool hasL = false;
    for(char i:s)
    {
        if(i == 'L')
        hasL = true;
        break;
    } 
    cout<< solve(s,0,0,0,hasL);
}