#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
int main()
{
    faster();
    int n;
    cin>> n;
    stack<int> s;
    vector<int> paper(n+5);
    for(int i = 0; i < n; i++)
    {
        cin>> paper[i];
    }
    vector<int> left(n+5);
    vector<int> right(n+5);

    // cắt bên trái
    for(int i = 0; i < n; i++)
    {
        while(!s.empty() && paper[s.top()] >= paper[i]) s.pop();
        if(s.empty()) left[i] = 0;
        else left[i] = s.top()+1;
        s.push(i);
    }
    while(s.size()) s.pop(); // clear stack

    // cắt bên phải
    for(int i = n-1; i >= 0; i--)
    {
        while(!s.empty() && paper[s.top()] >= paper[i]) s.pop();
        if(s.empty()) right[i] = n-1;
        else right[i] = s.top()-1;
        s.push(i);
    }
    int cd = 0;
    for(int i = 0; i < n; i++)
    {
        if(paper[i] <= right[i]-left[i]+1)
        {
            cd = max(cd,paper[i]);
        }
        else cd = max(cd,right[i]-left[i]+1);
    }
    cout<< (ll)cd*cd;
}