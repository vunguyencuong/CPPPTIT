#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++) sum += s[i]-'0';
    if(sum % 3 == 0) return false;
    if(s.length() < 2)
    {
        int num = 0;
        for(int i = s.length()-1; i >= 0; i--)
        {
            num = num*10 + s[i]-'0';
        }
        if(num % 8 == 0) return true;
        else return false;
    }
    if(s.length() > 2)
    {
        int len = s.length();
        int num = 0;
        if(s[len-3]-'0' % 2 == 0)
        {
            num = (s[len-2]-'0')*10 + s[len-1]-'0';
            if(num % 8 == 0) return true;
            else return false;
        }
        if(s[len-3]-'0' % 2 != 0)
        {
            num = (s[len-2]-'0')*10 + s[len-1]-'0' + 4;
            if(num % 8 == 0) return true;
            else return false;
        }
        int sum2 = s[len-1];
        for(int i = len-2; i >= 0 ;i--)
        {
            sum2 += (s[i]-'0')*2;
        }
        if(sum2 % 8 == 0) return true;
        else return false;
        num = (s[len-3]-'0')*100 + (s[len-2]-'0')*10 + s[len-1]-'0';
        if(num%8 == 0) return true;
        else return false;
        int sum3 = (s[len-3]-'0')*4 + (s[len-2]-'0')*4 + s[len-1]-'0';
        if(sum3 % 8 == 0) return true;
        else return false;
    }
        
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        int count = 0;
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            string res = "";
            for(int j = i; j < len; j++)
            {
                res += s[j];
                if(check(res)) count++;
            }
        }
        cout<< count << endl;
    }
}