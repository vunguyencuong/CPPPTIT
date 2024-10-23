#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    faster();
    int n;
    cin>> n;
    vector<int> v(n);
    priority_queue<int, vector<int>, greater<int>> x;
    priority_queue<int> y;
    for(int i = 0; i < n;  i++)
    {
        cin>> v[i];
        x.push(v[i]);
        y.push(v[i]);
    } 
    int left = 0;
    int right = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != x.top())
        {
            left = i;
            break;
        }
        else x.pop();
    }
    for(int i = n-1; i>= 0; i--)
    {
        if(v[i] != y.top())
        {
            right = i;
            break;
        }
        else y.pop();
    }
    cout<< left+1 << " " << right+1;
}