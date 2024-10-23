#include<bits/stdc++.h>
using namespace std;

vector<bool> check(100, true);

void snt()
{
	check[0] = check[1] = false;
	for(int i = 2; i*i <= 100; i++)
	{
		if(check[i] == true)
		{
			for(int j = 2*i; j <= 100 ; j+=i)
			{
				check[j] = false;
			}
		}
	}
}

int solveSum(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
     
    long long  a, b; cin>> a >> b;
    snt();
    int dem = 0;
    for(long long i = a; i <= b; i++){
        if(check[solveSum(i)]){
            dem++;
        }
    }
    cout<< dem << endl;
}