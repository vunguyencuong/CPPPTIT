#include <bits/stdc++.h>
using namespace std;

string solve(string s1, string s2){
    string ans = "";
    while(s1[0] == '0' && s1.size() > 1){
        s1 =  s1.substr(1);
    }
    while(s2[0] == '0' && s2.size() > 1){
        s2 =  s2.substr(1);
    }
    int du = 0;
    int i = s1.length()-1;
    int j = s2.length()-1;
    while(i >= 0 || j >= 0 || du > 0){
        int cs1 = (i >= 0) ? (s1[i]-'0') : 0;
        int cs2 = (j >= 0) ? (s2[j]-'0') : 0;

        int sum = cs1+cs2+du;
        du = sum /10;
        ans = char('0' + sum%10) + ans;
        i--;
        j--;
    }
    return ans;
}

int main(){
    int n; cin>> n;
    string num1, num2;
    for(int i = 0; i < n; i++){
        int x; cin>> x;
        num1 += char('0' + x);
    }

    for(int i = 0; i < n; i++){
        int x; cin>> x;
        num2 += char('0' + x);
    }
    cout<< solve(num1,num2) << endl;
}