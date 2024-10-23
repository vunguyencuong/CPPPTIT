#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int n;
int result = 1e9+7;
int a[100][100]={0};
int check[100] = {0};

int count(string s1, string s2)
{
    int same[27]={0};
    int res = 0;
    for(char c:s1)
    {
        same[c-'A']++;
    }
    for(char c:s2)
        same[c-'A']++;
    for(int i = 0; i < 26; i++)
    {
        if(same[i] == 2) res++;
    }    
    return res;
}
void BackTrack(int count, int sum)
{
    if(count == n)
    {
        result = min(result,sum);
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(check[i] == 0)
    }
}


int main()
{
    cin>> n;

}