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
	int q; cin>> q;
    while(q--){
        int l,r; cin>> l >> r;
        int ans = 0;
        for(int i = l; i <= r; i++){
            if(i % 2 == 1 && check[(i+1)/2] && check[i]) ans++;
        }
        cout<< ans << endl;
    }
}