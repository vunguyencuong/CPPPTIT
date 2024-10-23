#include<bits/stdc++.h>
using namespace std;
int n, a[20][20];
int havecheck[20][20];
vector<string> res;

void Try(int i, int j, string s)
{
    if(a[1][1] == 0 || a[n][n] == 0) return;
    
    if(i == n && j == n){
        res.push_back(s);
        return;
    }

    if(i != n && a[i+1][j] == 1 && !havecheck[i+1][j])
    {
        havecheck[i][j] = true;
        Try(i+1,j,s+"D");
        havecheck[i][j] = false;
    }

    if(j != n && a[i][j+1] == 1 && !havecheck[i][j+1])
    {
        havecheck[i][j] = true;
        Try(i,j+1,s+"R");
        havecheck[i][j] = false;
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
            for(int j = 1; j <= n; j++)
            {
                cin>> a[i][j];
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