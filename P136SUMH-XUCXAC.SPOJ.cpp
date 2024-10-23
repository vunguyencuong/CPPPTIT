#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>> a >> b;
	int less = 0;
	int bigger = 0;
	int equal = 0;
	for(int i = 1; i <= 6 ;i++)
	{
		if(abs(i-a) < abs(i-b)) less++;
		else if(abs(i-a) == abs(i-b)) equal++;
		else if(abs(i-a) > abs(i-b)) bigger++;
	}
	cout<< less << " " << equal << " " << bigger << endl;
}
