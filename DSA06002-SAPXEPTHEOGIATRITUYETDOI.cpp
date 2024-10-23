#include<bits/stdc++.h>
using namespace std;
int x;
vector<int> value;
bool compare(int i, int j)
{
    if(abs(x-value[i]) < abs(x - value[j])) return true;
    if(abs(x - value[i]) == abs(x - value[j]) && i < j) return true;
    return false;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        value.clear();
        int n; cin>> n >> x;
        int y;
        vector<int> id;
        for(int i = 0; i < n; i++)
        {
            cin>> y;
            value.push_back(y);
            id.push_back(i);
        }
        sort(id.begin(),id.end(),compare);
        for(int i : id) cout<< value[i] << " ";
        cout<< endl;
    }
}