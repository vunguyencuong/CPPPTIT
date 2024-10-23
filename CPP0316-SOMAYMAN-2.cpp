#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    while(n > 9)
    {
        int sum = 0;
        while(n)
        {
            sum += n%10;
            n /= 10;
        }
        n = sum;
    }
    if(n == 9) return true;
    else return false;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        int tong = 0;
        for(int i = 0; i < s.length(); i++)
        {
            tong += s[i]-'0';
        }
        if(check(tong)) cout<< 1 << endl;
        else cout<< 0 << endl;
    }
}