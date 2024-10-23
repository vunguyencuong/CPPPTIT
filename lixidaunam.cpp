#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
ll k, kt ;string s ;
int main() 
{
	cin >> s >> k ;
	while (k > 0) 
	{
		kt = 0 ;
		for (ll i=0 ; i < s.size()-1 ; i++){
            if ( s[i] < s[i+1]) 
            {
                s.erase(i,1) ;
                kt=1 ;
                k-- ;
                break;
            }
        }
		if ( kt == 0){
		    while ( k--){
                s.erase(s.size()-1,1) ;
            } 
		}	
	}
	cout << s ;
}