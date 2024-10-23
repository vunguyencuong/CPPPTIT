#include<bits/stdc++.h>
using namespace std;

/*int Loai3(int n)
{
	int m = n;
	int rev_n = 0;
	while(n > 0)
	{
		rev_n = rev_n*10 + n%10;
		n /= 10;
	}
	if(m == rev_n) return 1;
	else return 0;
}
int Loai2(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n%10;
		n /= 10;
	}
	if(Loai3(n) == 1 && sum%10 == 0) return 1;
	else return 0 ;
		
}
int Loai1(int n)
{
	while(n > 0)
	{
		if(n%10 == 0) return 0;
		n /= 10;
	}	
	return 1;
}
*/
int main()
{

	/*	int count1 = 0;
		int count2 = 0;
		int count3 = 0;
		vector<int> a;
		for(int i = 1e5 ; i < 1e6;i++)
		{
			if(Loai3(i) == 1)
			{	
				count3 ++;
				a.push_back(i);
			}
		}
		for(int i = 0; i < a.size();i++)
		{
			if(Loai2(a[i]) == 1) count2++;
			if(Loai1(a[i]) == 1 && Loai2(a[i]) == 1) count1++;
		}
	
		cout<< count3 << " " << count2 <<" " << count1 << endl;
	*/ 
	/* count3 = 900 count2 = 180 count1 = 145 */
	int T;
	cin>> T;
	while(T--)
	{
		int n,m,k;
		cin>> n >> m >> k;
		if((n <= 145) && (m <= 180-n) && (k <= 900-m-n) ) cout<< "YES" << endl;\
		else cout<< "NO" << endl;
	}
	return 0;
}
