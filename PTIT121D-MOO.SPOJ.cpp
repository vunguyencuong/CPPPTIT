#include<bits/stdc++.h>
using namespace std;

char Div(long long n)
{
	long long s[100];
	s[0] = 3;
	int k = 0;
	while(s[k] < n)
	{
		k++;
		s[k] = s[k-1]*2+k+3;
	}
	While(k > 0)
	{
	}
		if(n == s[k-1] +1) return 'm';
		if(n > s[k-1] +1 && n <= s[k-1]+3) return 'o';
		if(n > s[k-1]+k+3) n = n- s[k-1] -k -3;
		k--;
	}
	if(n == 1) return 'm';
	return 'o';
	
}

int main()
{
	long long n;
	cin>> n;
	cout<< Div(n);
	return 0;
}
