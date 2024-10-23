#include<bits/stdc++.h>
#define ll long long
using namespace std;
string n;
string nhan(string a,char b){
    ll n=0;
    string s="";
    for(ll i=a.size()-1;i>=0;i--){
        s=to_string(((a[i]-48)*(b-48)+n)%10)+s; // lay hang don vi
        n=((a[i]-48)*(b-48)+n)/10; // phan du ra => + tk tiep theo
    }
    if(n!=0) s=to_string(n)+s;
    while(s[0]=='0'&&s.size()>1) s.erase(0,1);
    return s;
}
// 15 => 15
// 7*3*2*1*9*8*6*7*3*8*9*12763182976318273618297362189763
// "3" * "6" = "18"
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    ll d=0;
    while(n.size()>1){
        string s=to_string(n[0]-48);
        for(ll i=1;i<n.size();i++)
            s=nhan(s,n[i]);
        n=s;
        d++;
    }
    cout<<d;
    return 0;
}
  

