#include<bits/stdc++.h>
using namespace std;
int main()
{
	int C,K;
	cin>> C >> K;
	int min_money = 1;
	for(int i = 1; i <= K;i++)
	{
		min_money *= 10;
	}
	long long case_1 = (C/min_money)*min_money;
	long long case_2 = case_1 + min_money;
	if(C - case_1 >=  case_2-C)
		cout<< case_2;
	else cout<< case_1;	
	
	return 0;
}
