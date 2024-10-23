#include<bits/stdc++.h>
using namespace std;

string Multi(char c, string s) // nhân 1 chữ số vs 1 số
{
    string res = "";
    int len = s.length();
    int nho = 0;
    for(int i = len; i >= 0; i--)
    {
        int num = (c-'0')*(s[i]-'0') + nho;
        if(num > 9)
        {
            nho = num/10;
            num = num%10;
        }
        else nho = 0;
        res = (char)(num+'0') + res;
    }
    if(nho > 0) res = (char)(nho+'0') + res;
    return res;
}
string Sum(string a, string b) // hàm cộng  2 string
{
    int len1 = a.length(), len2 = b.length();
    while(len1 < len2) a='0'+a;
    while(len1 > len2) b='0'+b;
    int nho = 0; string res = "";
    for(int i = len1-1; i >= 0; i--)
    {
        int num = a[i]-'0'+b[i]-'0' + nho;
        if(num > 9 )
        {
            nho = num/10;
            num = num%10;
        }
        else nho = 0;
        res = (char)(num-'0')+res;
    }
    if(nho > 0) res = '1'+res;
    return res;
}
string solve(string a, string b)
{
    string ans = "";
    string donvi ="0";
    int len1 = a.length();
    for(int i = len1-1; i >= 0; i--)
    {
        string res = Multi(a[i],b);
        if(i == len1-1) ans = res;
        else
        {
            ans = Sum(ans,res+donvi);
            donvi += '0';
        }
    }
    return ans;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string s1,s2;
        cin>> s1 >> s2;
        int len1 = s1.length(), len2 = s2.length();
        if(len1 > len2)
        {
            string tmp = s1;
            s1 = s2;
            s2 = tmp;
        }
       // cout<< s1 << " " << s2;
        //cout<< endl;
        cout<< solve(s1,s2);
        cout<< endl;
    }
}