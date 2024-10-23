#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>, equal_to<int>> x;
int main()
{
    int n,k;
    cin>> n;
    while(n--)
    {
        cin>> k;
        x.push(k);
    }
    while(!x.empty())
    {
        cout<< x.top() << " ";
        x.pop();
    }
}