#include<bits/stdc++.h>
using namespace std;

struct data
{
    int word;
    int tanso;
};

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string  s;
        cin>> s;
        int tanso[1000] = {0};
        int len = s.length();
        vector<data> v;
        for(int i = 0; i < len; i++)
        {
            int check = 0;
            for(int j = 0; j < v.size(); j++)
            {
                if((int)s[i] == v[j].word)
                {
                    check = 1;
                    v[j].tanso++;
                }
            }
            if(check == 0)
            {
                data b;
                b.word = (int)s[i];
                b.tanso = 1;
                v.push_back(b);
            }
        }
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i].tanso == 1) cout<< (char) v[i].word;
        }
        cout<< endl;

    }
}