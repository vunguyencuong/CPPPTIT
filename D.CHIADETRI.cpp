#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s1,s2;
        cin>> s1 >> s2;
        int len1 = s1.length();
        int len2 = s2.length();
        ll a = 0;
        ll b = 0;
        for(int i = 0; i < len1; i++)
        {
            a = a*2 + (s1[i] - '0');
        }    
        for(int i = 0; i < len2; i++)
        {
            b =  b*2 + (s2[i]-'0');
        }
        ll c = a*b;
        cout<< c << endl;
    }
}