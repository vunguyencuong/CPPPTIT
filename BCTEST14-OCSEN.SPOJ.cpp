#include<bits/stdc++.h>
using namespace std;
int main()
{
	int V , A, B;
	cin>> A >> B >> V;
	if(V == A) cout<< "1";
	else
	{
		if((V-B)%(A-B) == 0) cout<< (V-B)/(A-B);
		else if((V-B)%(A-B) != 0) cout<< (V-B)/(A-B)+1;
	}
}
