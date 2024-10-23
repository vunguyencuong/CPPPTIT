#include<bits/stdc++.h>
using namespace std;
bool isNum(string s)
{
    if(s[s.size()-1] >= '0' && s[s.size()-1] <= '9') return true;
    else return false;
}
void solve()
{
    string s; getline(cin,s);
    stringstream ss(s);
    string token;
    vector<string> Word,Post,ans;
    vector<int> Num;
    while(ss >> token)
    {
        token.pop_back(); // loại bỏ NULL ở cuối string
        if(isNum(token)) Num.push_back(stoi(token)); // mảng lưu số
        else Word.push_back(token); // mảng lưu chữ
        Post.push_back(token); // lưu lại các từ ban đầu đã được cắt bỏ đi dấu ','
    }
    sort(Num.begin(),Num.end());
    sort(Word.begin(),Word.end());
    int id1 = 0, id2 = 0;
    for(int i= 0; i < Post.size(); i++)
    {
        if(isNum(Post[i]))
        {
            ans.push_back(to_string(Num[id1])); // đổi về string
            id1++;
        }
        else
        {
            ans.push_back(Word[id2]);
            id2++;
        }
    }
    for(int i = 0; i < ans.size()-1; i++)
    {
        cout<< ans[i] << ", ";
    }
    cout<< ans[ans.size()-1] << "." << endl;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
}