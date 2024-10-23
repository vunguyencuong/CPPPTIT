#include<bits/stdc++.h>
using namespace std;

struct data
{
    string s;
    int ts;
};

int main()
{
    int n;
    cin>> n;
    cin.ignore();
    vector <data> v;
    for(int i = 0; i < n; i++)
    {
        string word;
        getline(cin,word);
        int check = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(word.compare(v[i].s) == 0)
            {
                v[i].ts++;
                check = 1;
            }
        }
        if(check == 0)
        {
            data b;
            b.s = word;
            b.ts = 1;
            v.push_back(b);
        }
    }
    int count = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].ts >= 1) count++;
    }
    cout<< count;
}