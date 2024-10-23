#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long n;
	cin>> n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		int tanso = 0;
		while(n % i == 0)
		{
			tanso++;
			n /= i;
		}
		if(tanso != 0) 
		{
			cout<< i << " " << tanso << endl;
		}
	}
	if(n > 1) cout<< n <<" " << 1;
	
	
	return 0;
}
