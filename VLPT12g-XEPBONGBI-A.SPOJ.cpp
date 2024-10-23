#include<bits/stdc++.h>
using namespace std;

/*int Check1(int n)
{
	long long denta = 8*(n-1)+1;
	int c = (int)sqrt(denta);
	if(c ==  sqrt(denta))
	{
		if((c-1)% 2 == 0) return 1;
		else return 0;
	}
	return 0;
}

int Check2(int n)
{
	if(sqrt(n) == (int) sqrt(n)) return 1;
	else return 0;
}
*/
int main()
{
/*	vector<long long> v;
	for(long long i = 2; i <= 1000000000-1; i++)
	{
		if(Check1(i-1) == 1 && Check2(i) == 1) 
		{
			v.push_back(i);
		}
	} 
	for(int i = 0; i < v.size(); i++)
	{
		cout<< v[i] << " ";
	}
	*/
	//cac phan tu : 4 16 121 529 4096 17956 139129 609961 4726276 20720704 160554241 703893961
	int index = 1;
	long long v[] ={4,16, 121, 529, 4096, 17956,139129, 609961, 4726276 ,20720704 ,160554241 ,703893961};
	while(true)
	{
		int a,b;
		cin>> a >> b;
		if(a==0 && b == 0) return 0;
		int count = 0;
		for(int i = 0; i < 12;i++)
		{
			if(v[i] > a && v[i] < b) count++;
		}
		cout<< "Case " << index <<": "<< count << endl;
		index++;
	}
	
	
	
	
	
	return 0 ;
}
