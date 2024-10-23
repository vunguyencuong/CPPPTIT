#include<bits/stdc++.h>
using namespace std;
int n;
bool check(int b[], int k)
{
    if(k == 1) return true;
    int row1  = k, col1 = b[row1];
    for(int row2 = 1; row2 < row1; row2++)
    {
        int col2 = b[row2];
        if(col1 == col2 || row1 == row2 || col1+row1 == col2+row2 || col2-row2 == col1-row1) return false;
    }
    return true;
}

int solve(int b[], int i)
{
    if(i > n) return 1;
    int count = 0;
    for(int j = 1; j <= n; j++)
    {
        b[i] = j;
        if(check(b,i))
        {
            count += solve(b,i+1);
        }
    }
    return count;
}


int main()
{
    cin>> n;
    int b[n+5];
    cout<< solve(b,1);

}