#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        vector<int> cs;
        for(int i = 0; i < n; i++)
        {
            while(a[i])
            {
                int m = a[i]%10;
                a[i] /= 10;
                int check = 0;
                for(int i = 0; i < cs.size(); i++)
                {
                    if(m == cs[i])
                    {
                        check = 1;
                        break;
                    }
                }
                if(check == 0) cs.push_back(m);
            }
        }
        sort(cs.begin(),cs.end());
        for(int i : cs) cout<< i << " ";
        cout<< endl;
    }
}