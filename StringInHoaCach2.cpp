#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    vector <string> v;
    for (int i=0; i<s.size(); i++) {
        if (s[i] >='A' && s[i] <='Z') s[i] += 32;
    }
    for (int i=0; i<s.size(); i++) {
        if (s[i] != ' ') {
            string w = "";
            while (i < s.size() && s[i] != ' ') {
                w += s[i];
                i++;
            }
            w[0] -= 32;
            v.push_back(w);
        }
    }
    for (int i=0; i<v.size()-1; i++) cout << v[i] << " ";
    cout << v[v.size()-1];
}
