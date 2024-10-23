#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);

string solve(string a, string b)
{
    while(a.length() < b.length()) a='0'+a;
    while(b.length() < a.length()) b='0'+b;
    string ans = "";
    int nho = 0;
    for(int i = a.length()-1; i >= 0 ;i--)
    {
        int sum = (int)(a[i]-'0') + (int)(b[i]-'0') + nho;
        if(sum > 9)
        {
            nho = sum/10;
            sum = sum -  nho*10;
        }
        else nho = 0;
        ans = (char)(sum +'0') + ans;
    }
    if(nho > 0) ans = '1' + ans;
    return ans;
}

int main()
{
    faster();
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string a,b;
        cin>> a >> b;
        cout<< solve(a,b) << endl;
    }
}