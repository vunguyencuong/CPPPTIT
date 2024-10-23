#include<bits/stdc++.h>
using namespace std;
// cach 1
/*
int main()
{
    string s;
    cin>> s;
    int len = s.length();
    string res = "";
    int pos = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '>')
        {
            if(pos < res.length()) pos++;
        }
        else if(s[i] == '<')
        {
            if(pos > 0) pos--;
        }
        else if(s[i] == '-')
        {
            if(pos > 0)
            {
                pos--;
                res.erase(res.begin()+pos);
            }
        }
        else
        {
            res.insert(res.begin()+pos,s[i]);
            pos++;
        }
    }
    cout<< res << endl;
}
*/

//Cach 2 - bang stack

int main()
{
    string s;
    cin>> s;
    stack<char> front, back;
    for(char c: s)
    {
        if(c == '-')
        {
            if(!front.empty()) front.pop();
        }
        else if(c == '>')
        {
            if(!back.empty()) 
            {
                front.push(back.top());
                back.pop();
            }
        }
        else if(c == '<')
        {
            if(!front.empty())
            {
                back.push(front.top());
                front.pop();
            }
        }
        else
        {
            front.push(c);
        }
    }
    while(front.size())
    {
        back.push(front.top());
        front.pop();
    }
    while(back.size())
    {
        cout<< back.top();
        back.pop();
    }


}