#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main()
{
    faster();
    int n;
    cin>> n;
    int a[n][4];
    int count = 0;
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>> a[i][j];
            if(a[i][j] == 1) check++;
        }
        if(check >= 2) 
        {
            count++;
        }
        check = 0;
    }
    cout<< count << endl;

}