#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int th[100];
long long ans;
int ok = 0;
bool check(){
    int tich = 1;
    for(int i = 1; i <= k ;i++){
        tich *= th[i];
    }
    if(tich == n){
        ok = 1;
        return true;
    } 
    return false;
}

void BackTrack(int i)
{
    long long res =0;
    for(int j = th[i-1]+1 ; j <= 9-k+i; j++)
    {
        th[i] = j;
        if(i == k)
        {
            if(check()){
                for(int l = 1; l <= k;l++)
                {
                    res = res*10 + th[l];
                }
                if(ans > res) ans = res;
            }
        }
        else BackTrack(i+1);
    }
}

int main()
{
    cin>> n >> k ;
    ans = 100000000;
    BackTrack(1);
    if(ok == 1) cout<< ans << endl;
    else cout<< -1 << endl;
}