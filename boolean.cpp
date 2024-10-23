#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s; getline(cin,s);
    stringstream ss(s);
    vector<string> v;
    string token;
    while(ss>> token){
        v.push_back(token);
    }
    int dem = 0;
    for(int i = 0; i < v.size();i++){
        if(v[i] == "not") dem++;
    }
    string c = v[v.size()-1];
    if(dem % 2 == 0){
        if(c == "False") cout<< "False" << endl;
        else cout<< "True" << endl;
    } else{
        if(c == "True") cout<< "False" << endl;
        else cout<< "True" << endl;
    }
}