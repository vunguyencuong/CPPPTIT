#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int value;
    int tanso;
};

bool cmp(Data a, Data b)
{
    if(a.tanso == b.tanso) return a.value < b.value;
    return a.tanso > b.tanso;
}
int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,x; cin>> n;
        vector<Data> v;
        for(int i = 0; i < n; i++)
        {
            cin>> x;
            int check = 0;
            for(int j = 0; j < v.size(); j++)
            {
                if(v[j].value == x)
                {
                    check = 1;
                    v[j].tanso++;
                }
            }
            if(check == 0)
            {
                struct Data res;
                res.value = x;
                res.tanso = 1;
                v.push_back(res);
            }
        }
        sort(v.begin(),v.end(),cmp);
        for(int i = 0; i < v.size(); i++)
        {
            for(int j = 0; j < v[i].tanso; j++)
            {
                cout<< v[i].value << " ";
            }
        }
        cout<< endl;
    }
}
