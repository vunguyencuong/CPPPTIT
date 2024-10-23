#include<bits/stdc++.h>
using namespace std;
int n, check[15];

void Try(string s)
{
    int len = s.size();
    if(len == n) cout<< s << endl;
    for(int i = 1; i <= n; i++)
    {
        if(len == 0 || (!check[i] && abs(s[len-1] - '0' - i) != 1))
        {
            check[i] = 1;
            Try(s+to_string(i));
            check[i] = 0;
        }
    }

}


int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        Try("");
    }
}