#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        string s; cin>> s;
        stack<string> S;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') S.push(string(1,s[i]));
            else{
                string a = S.top(); S.pop();
                string b = S.top(); S.pop();
                S.push(b+s[i]+a);
            }
        }
        cout<< S.top() << endl;
    }
}