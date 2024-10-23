/*#include<bits/stdc++.h>
using namespace std;

struct InFormation
{
	string name;
	string MSV;
	string date;
	int age;
	InFormation() // khoi tao de tranh bi gap gia tri rac
	{
		name = " ";
		age = 0;
		MSV =" " ;
		date = " ";
	}
};
int main()
{
	InFormation students[10]; // <=> int a[10]
	vector<InFormation> student1(10); // <=> vector<int>a(10)
	InFormation s; //<=> int a;
	cout<< s.name << "1\n" << s.MSV << "1\n" << s.date << "1\n" << s.age << endl;
	cin>> s.name >> s.MSV >> s.date >> s.age;
	cout<< "Name: " << s.name << endl;
	cout<< "MSV: " << s.MSV << endl;
	cout<< "Date of birth: " << s.date << endl;
	cout<< "Age: " << s.age << endl;
	
}
*/
#include<bits/stdc++.h>
using namespace std;
struct data
{
	int value;
	int ABS;
	int index;
	data()
	{
		value = 0;
		ABS = 0;
		index = 0;
	}
};

void print(vector<data>x)
{
	for(int i = 0; i < x.size(); i++ )
	{
		cout<< x[i].value << " ";
	}
	cout<< endl;
}
bool cmp(data x, data y)
{
	if(x.ABS = y.ABS) return x.index < y.index;
	return x.ABS < y.ABS;
}

int main()
{
	int n,m;
	cin>> n >> m;
	vector<data>Sort1(n);
	for(int i = 0; i < n; i++)
	{
		cin>> Sort1[i].value;
		Sort1[i].ABS = abs(m-Sort1[i].value);
		Sort1[i].index = i;
	}
	
	sort(Sort1.begin(),Sort1.end(),cmp);
	print(Sort1);
	
}
