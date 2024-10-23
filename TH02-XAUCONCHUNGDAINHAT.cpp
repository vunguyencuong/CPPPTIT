#include<bits/stdc++.h>
using namespace std;

int solve(string a, string b)
{
    int len1 = a.length(), len2 = b.length();
    int len = 0;
    if(len1 > len2) len = len1;
    else len = len2;
    int save[len+1][len+1];
    for(int i = 0; i <= len; i++)
    {
        for(int j = 0; j <= len; j++)
        {
            save[i][j] = 0;
        }
    }
    for(int i = 0; i < len1; i++)
    {
        for(int j = 0; j < len2; j++)
        {
            if(a[i] == b[j])
            {
                save[i+1][j+1] = save[i][j]+1;
            }
            else save[i+1][j+1] = max(save[i][j+1], save[i+1][j]);
        }
    }
    return save[len1][len2];
}

int main()
{
   
    string s1,s2; cin>> s1 >> s2;
    cout<< solve(s1,s2) << endl;

}