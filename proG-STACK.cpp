#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
   // int max = -1;
    int count = 0;
    stack<char> st;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '(') st.push(s[i]);
        else
        {
            if(!st.empty())
            {
                st.pop();
                count+=2;
            }
        }
        //if(max < count) max = count;
    }
    cout<< count;
}