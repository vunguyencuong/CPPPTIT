#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int n = s1.length(), m = s2.length();
    int l[n+1][m+1]={}; //luu lai do dai day con chung
    int lmax = 0;
    for(int i = 0; i <= n; i++)  l[i][0] = 0;
    for(int j = 0; j <= m; j++) l[0][j] = 0; // khoi tao bai toan co so
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i-1] == s2[j-1]) l[i][j] = l[i-1][j-1]+1;
            else{
                l[i][j] = max(l[i-1][j],l[i][j-1]);
            }
            if(lmax < l[i][j]) lmax = l[i][j];
        }
    }
    cout<< lmax << endl;
}