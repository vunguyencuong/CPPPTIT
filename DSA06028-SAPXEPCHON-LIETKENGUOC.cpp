#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>> n;
    vector<int> a(n);
    vector<string> ans;
    for(int i = 0; i < n; i++) cin>> a[i];
    for(int i = 0; i < n-1; i++)
    {
        string res = "";
        int minid = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[minid])
            {
                minid = j;
            }
        }
        swap(a[i],a[minid]);
        res += "Buoc " + to_string(i+1) + ": ";
        for(int k = 0; k < n; k++)
        {
            res += to_string(a[k]);
            res += " ";
        }
        ans.push_back(res);
    }
    for(int i = ans.size()-1; i >= 0 ;i--)
    {
        cout<< ans[i] << endl;
    }
}