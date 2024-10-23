#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int x = 0;
		int n;
		cin>> n;
        int odd = 0;
        int out = x;
		int size = 2*n -1;
        vector<int> res;
		for(int i = 0; i < size;i++)
		{
			if(i < n )x++;
            else x--;
            out = x+odd;
            res.push_back(out%10);
            odd = out/10;
		}
        for(int i = res.size()-1; i>=0; i--)
        {
            cout<< res[i];
        }
		cout<< endl;
	}
}  
