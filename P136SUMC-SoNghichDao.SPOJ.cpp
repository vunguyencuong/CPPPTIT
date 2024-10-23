#include<bits/stdc++.h>
using namespace std;

int Snd(int n)
{
	int m = 0;
	while(n > 0)
	{
		m = m*10 + n%10;
		n /= 10;
	}
	return m;
}

int main()
{
	int a ,b;
	cin>> a >> b;
	int c = Snd(a);
	int d = Snd(b);
	if(c > d) cout<< c << endl;
	else cout<< d << endl;
	
	return 0;
}
