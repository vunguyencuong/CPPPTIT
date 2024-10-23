#include<bits/stdc++.h>
using namespace std;
void Min(string s1, string s2)
{
    long long n1=0,n2=0;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == '6') s1[i]--;
        n1=n1*10+s1[i]-'0';
    }
    for(int i = 0; i < s2.length(); i++)
    {
        if(s2[i] == '6') s2[i]--;
        n2=n2*10+s2[i]-'0';
    }
    cout<<n1+n2;
}
 
void Max(string s1, string s2)
{
    long long n1=0,n2=0;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == '5') s1[i]++;
        n1=n1*10+s1[i]-'0';
    }
    for(int i = 0; i < s2.length(); i++)
    {
        if(s2[i] == '5') s2[i]++;
        n2=n2*10+s2[i]-'0';
    }
    cout<<n1+n2;
}
int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        cin>> s1 >> s2;
        Min(s1,s2);
        cout<< " ";
        Max(s1,s2);
        cout<< endl;
    }
}