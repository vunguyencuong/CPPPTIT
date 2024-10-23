#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>> s;
    deque<int> q;
    for(int i = 0; i <= 7; i++){
        q.push_back(i+1);
    }
    for(int i = 0; i < s.size();i++){
        if(s[i] == 'R'){
            q.push_front(q.back());
            q.pop_back();
        }
        else{
            q.push_back(q.front());
            q.pop_front();        
        }
    }
    while(!q.empty()){
        cout<< q.front();
        q.pop_front();
    }
}