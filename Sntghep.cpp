#include<bits/stdc++.h>
using namespace std;

vector<bool> check(1e6+5, true);

void snt()
{
	check[0] = check[1] = false;
	for(int i = 2; i*i <= 1e6; i++)
	{
		if(check[i] == true)
		{
			for(int j = 2*i; j <= 1e6 ; j+=i)
			{
				check[j] = false;
			}
		}
	}
}


int main(){
	
	snt();
	vector<int> listSnt;
    for(int i = 2; i <= 1e6; i++){
        if(check[i] && listSnt.size() < 102){
            listSnt.push_back(i);
        }
    }
    for(int i = 0; i < 100; i++){
        cout<< listSnt[i] << listSnt[i+1] << " ";
    }
}