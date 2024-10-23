#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
int check[100][100];
vector<string> res;

void Try(int i, int j, string s)
{
    if(a[1][1] == 0 || a[n][n] == 0)
    {
        return;
    }
    if(i == n && j == n)
    {
        res.push_back(s);
        return;
    }
    if(i != n && a[i+1][j] == 1 && !check[i+1][j])
    {
        check[i][j] = true; // Đã đi qua
        Try(i+1,j,s+"D");
        check[i][j] = false;
    }
    if(j != n && a[i][j+1] == 1 && !check[i][j+1])
    {
        check[i][j] = true; // Đã đi qua
        Try(i,j+1,s+"R");
        check[i][j] = false;
    }
    if(i != 1 && a[i-1][j] == 1 && !check[i-1][j])
    {
        check[i][j] = true;
        Try(i-1,j,s+"U");
        check[i][j] = false;
    }
    if(j != 1 && a[i][j-1] == 1 && !check[i][j-1])
    {
        check[i][j] = true;
        Try(i,j-1,s+"L");
        check[i][j] = false;
    }

}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++){
                cin>> a[i][j];
                check[i][j] = false;
            }
        }
        res.clear(); 
        Try(1,1,"");
        if(res.size() == 0) cout<< -1 << endl;
        else{
            sort(res.begin(),res.end());
            for(string i : res) cout<< i << " ";
            cout<< endl;
        }
    }    
}