#include<bits/stdc++.h>
using namespace std;

struct data
{
    int value;
    int f;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>> n;
    vector<data> a;
    for(int i = 0; i < n; i++)
    {
        data tmp;
        int x;
        int check = 0;
        cin>> x;
        for(int j = 0; j < a.size();j++)
        {
            if(a[j].value == x)
            {
                check = 1;
                a[j].f++;
                break;
            }
        }
        if(check == 0)
        {
            tmp.value = x;
            tmp.f = 1;
            a.push_back(tmp);
        }
    }
    int max = 0;
    int pos = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i].f > max)
        {
            max =  a[i].f;
            pos = i;
        }
    }
    cout<< a[pos].value;
}