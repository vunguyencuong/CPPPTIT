#include<bits/stdc++.h>
using namespace std;

bool checkNum(char c){
    if(c >= '0' && c <= '9') return true;
    else return false;
}

int main(){

    string s; cin>> s;
    
    for(int i = 0; i < s.length(); i++){
        if(checkNum(s[i])){
            string res = "";
            for(int j=i+1;j < s.length(); j++){
                if(checkNum(s[j]) == false){
                    break;
                }
                if(s[j] > s[j-1]){
                    res += s[j];
                }
                else break;
            }
            if(res != ""){
                cout<< s[i] << res;
            }
            i += res.length();
        }
    }
}