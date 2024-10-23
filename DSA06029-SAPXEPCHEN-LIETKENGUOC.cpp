#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>> n;
    int a[1005] = {};
    int x;
    int size = 1;
    vector<string> ans;
    for(int i = 1; i <= n; i++)
    {
        string res = ""; 
        cin>> x;
        int pos = size;
        a[size] = x;
        while(pos > 1 && a[pos] < a[pos-1])
        {
            swap(a[pos],a[pos-1]);
            pos--;
        } 
        res += "Buoc " + to_string(i-1) + ": ";
        for(int j = 1; j <= size; j++)
        {
            res += to_string(a[j]) + " ";
        }
        ans.push_back(res);
        size++;
    }
    for(int i = ans.size() - 1; i >= 0 ;i--)
    {
        cout<< ans[i] << endl;
    }
}