#include<iostream>
using namespace std;
int main()
{
	char a,b;
	cin>> a >> b;
	if(a >= 'a' && a <= 'z') a -= 32;
	if(b >= 'a' && b <= 'z') b -= 32;
	for(int i =(int) a; i <= (int)b; i++) cout<< (char)i << " ";
}
