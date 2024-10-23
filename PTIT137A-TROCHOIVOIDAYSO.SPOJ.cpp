#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	while(true)
	{
		ll a ,b ,c ,d;
		cin>> a >> b >> c >> d;
		if(a == 0 && b == 0 && c == 0 && d == 0) return 0;
		int count = 0;
		while(a != b || b != c || c != d)
		{
			ll a_old = a;
			a = abs(a-b);
			b = abs(b-c);
			c = abs(c-d);
			d = abs(d-a_old);
		
		//	if(a == b && a == c && a == d ) 
			count++;
		}
		cout<< count  << endl;
	}	
	
	
	return 0;
}
