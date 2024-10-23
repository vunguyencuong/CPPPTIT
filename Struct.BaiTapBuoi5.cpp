#include<bits/stdc++.h>
using namespace std;

struct Student
{
	string name;
	int age;
	float gpa;
	int index;
	Student()
	{
		name = " ";
		age = 0;
		gpa = 0;
		index = 0;
	}
};

bool cmp1( Student x , Student y)
{
	if(x.name == y.name) return x.index < y.index;
	return x.name < y.name;
}

bool cmp2( Student x , Student y)
{
	if(x.age == y.age) return x.index < y.index;
	return x.age < y.age;
}

bool cmp3( Student x , Student y)
{
	if(x.gpa == y.gpa) return x.index < y.index;
	return x.gpa > y.gpa;
}

int main()
{
	int n,k;
	cin>> n >> k;
	if(k > 2)
	{
		return 0;
	}
	vector<Student> a(n);
	for(int i= 0 ; i < n; i++)
	{
		cin>>a[i].name>> a[i].age >> a[i].gpa;
		a[i].index = i;
	}
	if(k == 0)
	{
		sort(a.begin(),a.end(),cmp1);
	}
	else if(k == 1)
	{
		sort(a.begin(),a.end(), cmp2);
	}
	else if(k == 2)
	{
		sort(a.begin(),a.end(), cmp3);
	}
	for(int i = 0; i < n; i++)
	{
		cout<< a[i].name << " " << a[i].age << " " << setprecision(1) << fixed << a[i].gpa << endl;
	}
	
	
	return 0;
}
