#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void First(int a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void Sinh(int a[], int n, int &check)
{
     int i = n-1;
     while(i > 0 && a[i] > a[i+1])i--;
     if(i > 0)
     {
         int k = n;
         while(a[i] > a[k])k--;
         int tmp = a[i];
         a[i] = a[k];
         a[k] = tmp;
         int l = i+1, r = n;
         while(l <= r)
         {
             int tmp = a[l];
             a[l] = a[r];
             a[r] = tmp;
             l++,r--;
         }
     }
     else check = 0;
}

void Save(int a[], int n)
{
	string s = "";
    for(int i  =1 ; i <= n; i++)
    {
        s += (char)(a[i]+'0');
        s += " ";
    }
    ans.push_back(s);
}

int main()
{
    int a[1000];
    int n;
    cin>> n;
    First(a,n);
    int check = 1;
    while(check)
	{
        Save(a,n);
		Sinh(a,n,check);
	}
	for(int i = ans.size(); i >= 0; i--){
		cout<< ans[i] << endl;
	}
    return 0;
}
