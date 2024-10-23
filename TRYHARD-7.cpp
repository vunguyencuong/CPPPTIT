#include<bits/stdc++.h>
using namespace std;

int dem = 0;
void solve(char result[], int i, int open, int close, int check)
{
    if(check < 0) return;
    if(check == 0 && open == 0 && close == 0)
    {
        result[i] = '\0';
        cout<< (string)result << endl;
        dem++;
        return;
    }

    if(check != 0 && open == 0 && close == 0 ) return;

    if(open > 0)
    {
        result[i] = '(';
        solve(result,i + 1, open-1, close, check+1);
    }
    if(close > 0)
    {
        result[i] = ')';
        solve(result, i + 1, open, close - 1, check - 1 );
    }
}

int main()
{
    int n;
    cin>> n;
    char result[n];
    solve(result, 0,n/2, n/2,0);
    cout<< dem; 
}