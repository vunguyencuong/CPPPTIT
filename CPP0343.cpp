#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        string tokens;
        getline(cin,tokens);
        stringstream ss(tokens);
        vector<int> v;
        for(int i; ss >> i; v.push_back(i));
        int countc = 0;
        int countl = 0;
        int len = v.size();
        for(int i = 0; i < len; i++)
        {
            if(v[i] % 2 == 0) countc++;
            else countl++;
        }
        if((len % 2 == 0 && countc > countl) || (len % 2 == 1 && countl > countc)) cout<< "YES" << endl;
        else cout<< "NO" << endl;

    }
}