#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n)
{
	int check = 1;
	for(int i = 0; i < n-1;i++)
	{
		if(a[i] > a[i+1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        int a[1005];
        vector<string> ans;
        for(int i = 0; i < n; i++) cin>> a[i];
        for(int i = 0; i < n-1; i++)
        {
            string res = "";
            for(int j = 0; j < n-1; j++)
            {
                if(a[j] > a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
            }
            res += "Buoc " + to_string(i+1) + ": ";
            for(int k = 0; k < n; k++)
            {
                res += to_string(a[k]) + " ";
            }
            ans.push_back(res);
            if(check(a,n) == 1) break;
        }
        for(int i = ans.size()-1; i >= 0 ; i--)
        {
            cout<< ans[i] << endl;
        }
    }
}