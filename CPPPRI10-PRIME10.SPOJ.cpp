#include<bits/stdc++.h>
using namespace std;

int Check(int n)
{
	for(int i = 2; i*i <= n ;i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int Sum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		 int n;
		 cin>> n;
		 int count = 0;
		 int m = n;
		 int sum2 = 0;
		 if(Check(n) == 1) cout<< "NO" << endl;
		 else 
		 {
		 	for(int i = 2; i*i <= n;i++)
		 	{
		 		if(n % i == 0)
		 		{
		 			while(n % i == 0)
		 			{
		 				count++;
		 				sum2 += Sum(i);
		 				n /= i;
					}
				}
			}
			if(n > 1)
			{
				sum2 += Sum(n);
				count++;
			}
			if(Sum(m) == sum2 && count > 1) cout<< "YES" << endl;
			else cout<< "NO" << endl;
		}
	}
}
