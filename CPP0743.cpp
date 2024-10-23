#include<bits/stdc++.h>
using namespace std;

struct data
{
    string word;
};

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int len = s.length();
        vector<data> v;
        stringstream ss(s);
        for(string token; ss >> token;)
        {
            data b;
            b.word = token;
            v.push_back(b);
        }
        for(int i = v.size()-1; i >= 0; i--)
        {
            cout<< v[i].word << " ";
        }
        cout<< endl;
    }
}