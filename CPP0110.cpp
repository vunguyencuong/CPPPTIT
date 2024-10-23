#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>> s;
        if(s.find("084") != -1) s.erase(s.find("084"),3);
        cout<< s << endl;
    }
}