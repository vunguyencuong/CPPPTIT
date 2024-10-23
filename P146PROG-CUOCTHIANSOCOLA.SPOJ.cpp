#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[100005] = {};
	for(int i = 1; i <= n ;i++)
	{
		cin>> a[i];
	}
	if(n == 1)
	{
		cout<< "1 0";
		return 0;
	}
	int s1 = 0, s2 = 0;
	for(int i = 1 , j = n; i <= n ,j >= 1;)
	{
		if(a[i] == a[j])
		{
			s1++;
			s2++;
			i++;
			j--;
			if(i == j)
			{
				s1++;
				break;
			}
		}
		else if(a[i] < a[j])
		{
			a[j] = a[j] - a[i];
			s1++;
			i++;
			if(i == j)
			{
				s2++;
				break;
			}
		}
		else
		{
			a[i] = a[i]-a[j];
			s2++;
			j--;
			if(j == i)
			{
				s1++;
				break;
			}
		}
	}
	cout<< s1 << " " << s2;
	
	
	return 0;
}
