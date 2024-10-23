#include<bits/stdc++.h>
using namespace std;

int check(char c)
{
    if(c >= 'a' && c <= 'z') c -= 32;
    if(c == 'A' || c == 'B' || c == 'C') return 2;
    if(c == 'D' || c == 'E' || c == 'F') return 3;
    if(c == 'G' || c == 'H' || c == 'I') return 4;
    if(c == 'J' || c == 'K' || c == 'L') return 5;
    if(c == 'M' || c == 'N' || c == 'O') return 6;
    if(c == 'P' || c == 'Q' || c == 'R' || c == 'S') return 7;
    if(c == 'T' || c == 'U' || c == 'V') return 8;
    if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z') return 9;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        vector<int> a;
        for(int i = 0; i < s.length(); i++)
        {
            a.push_back(check(s[i]));
        }
        int ok = 1;
        int l = 0, r = a.size()-1;
        while(l <= r)
        {
            if(a[l] == a[r]) l++, r--;
            else
            {
                ok = 0;
                break;
            }
        }
        if(ok == 1) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }
}