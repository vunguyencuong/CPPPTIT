#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
vector<string> ans;
bool check()
{
    int ok = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0)
        {
            int count = 0;
            while(i <= n && a[i] == 0)
            {
                count++;
                i++;
            }
            i--;
            if(count > k) return false;
            if(count == k) ok++;
        }
    }
    if(ok == 1) return 1;
    return 0;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check())
            {
                string res = "";
                for(int i = 1; i <= n; i++)
                {
                    if(a[i] == 0) res += 'A';
                    else res += 'B';
                }
                ans.push_back(res);
            }
        }
        else Try(i+1);
    }
}

int main()
{
    cin>> n >> k;
    Try(1);
    cout<< ans.size() << endl;
    for(string i : ans)
    {
        cout<< i << endl;
    }
}