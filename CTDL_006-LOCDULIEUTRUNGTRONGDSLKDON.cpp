#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>> n;
    int x;
    map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        cin>> x;
        m[x]++;
        if(m[x] == 1) cout<< x << " ";
    }
}
