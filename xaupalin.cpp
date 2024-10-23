#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    string t  = s;
    reverse(t.begin(),t.end());
    return (t == s);
}

int main(){

    int t; cin>> t;
    while(t--){
        string s; cin>> s;
        if(check(s) || check(s+s.front())) cout<< "YES\n";
        else cout<< "NO\n";
    }

}