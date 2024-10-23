#include<bits/stdc++.h>
using namespace std;

int leapYear(int n)
{
	if(n % 400 == 0) return true;
	if(n % 4 == 0 && n % 100 != 0) return true;
	return false;
}
int sum(int n)
{
	int sum = 0;
	if(n < 10) sum = n;
	else
	{
		while(n > 0)
		{
			sum += n%10;
			n /= 10;
		}
	}
	return sum;
}
int main()
{
	int year;
	cin>> year;
	int result = 0;
	int days = 0;
	for(int i = 1 ; i <= 12;i++)
	{
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			days = 31;
		}
		else if(i == 2)
		{
			if(leapYear(year)) days = 29;
			else days = 28;
		}
		else days = 30;
		for(int j = 1; j <= days; j++)
		{
			result += sum(j) + sum(i) + sum(year);
		}
	}
	cout<< result << endl;
}

