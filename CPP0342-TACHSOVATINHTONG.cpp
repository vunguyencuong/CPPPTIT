#include<bits/stdc++.h>
using namespace std;
/*int solve()
{
    cin>> s;
    string res="";
    int ans = 0;
    int len = s.length();
    int i = 0;
    while(i < len)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            ans += (int) s[i]-'0';
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        i++;
    }
    sort(res.begin(),res.end());
    for(int j = 0; j < res.length(); j++) cout<< res[j];
    cout<< ans << endl;
}
*/
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
    string s; cin>> s;
    string res="";
    int ans = 0;
    int len = s.length();
    int i = 0;
    while(i < len)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            ans += (int) s[i]-'0';
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        i++;
    }
    sort(res.begin(),res.end());
    for(int j = 0; j < res.length(); j++) cout<< res[j];
    cout<< ans << endl;
    }
}