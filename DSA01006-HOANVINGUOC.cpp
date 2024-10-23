#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int n; cin>> n;
    vector<int> a(n);
    vector<string> ans;
    string res = "";
    for(int i = 0; i < n; i++){
        a[i] = i+1;
        res += to_string(i+1)+" ";
    } 
    ans.push_back(res);
    while(next_permutation(a.begin(),a.end()))
    {
        res = "";
        for(int i = 0; i < n; i++) res += to_string(a[i]) + " ";
        ans.push_back(res);
    }
    for(int i = ans.size()-1; i >= 0; i--) cout<< ans[i] << endl;
    cout<< endl;
} 
