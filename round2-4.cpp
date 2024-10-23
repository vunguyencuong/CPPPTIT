#include<bits/stdc++.h>
using namespace std;


string solve(string s, int k){
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            char base = isupper(s[i]) ? 'A' : 'a';
            res += (s[i] - base - k + 26) % 26 + base;
        } else res += s[i];
    }
    return res;
}

int main(){

    string s; getline(cin,s);
    int k; cin>> k;

    stringstream ss(s);
    string token;
    vector<string> v;
    while(getline(ss,token,'#')){
        v.push_back(token);
    }
    int count = 0;
    int max = 0;
    for(int i = 0; i < v.size(); i++){
        if(max < v[i].size()) max  = v[i].size();
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i].size() == max) count++;
    }
    cout<< count << endl;
    for(int i = 0; i < v.size(); i++){
        if(v[i].size() == max){
            string ans = solve(v[i],k);
            cout<< ans << endl;
            break;
        }
    }
}