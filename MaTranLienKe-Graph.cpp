#include<bits/stdc++.h>
using namespace std;
// đồ thị vô hướng
int main()
{
    int nut;
    cin>> nut;                         
    int a[nut][nut];                     
    for(int i = 0; i < nut; i++)        
    {
        for(int j = 0; j < nut; j++)
        {
            a[i][j] = 0;
        }
    }
    int start, end;
    while(cin>> start >> end)
    {
        a[start][end] = 1;
        a[end][start] = 1;
    }
    for(int i = 0; i < nut; i++)
    {
        for(int j = 0; j < nut; j++)
        {
            cout<< a[i][j] << " ";
        }
        cout<< endl;
    }
}

// input: 8                      output:
//        0 3                    0 1 1 1 0 0 0 0 
//        2 6                    1 0 0 0 1 1 0 0 
//        6 7                    1 0 0 0 0 0 1 0 
//        1 5                    1 0 0 0 0 0 0 1 
//        0 1                    0 1 0 0 0 0 0 1 
//        0 2                    0 1 0 0 0 0 0 1
//        3 7                    0 0 1 0 0 0 0 1 
//        5 7                    0 0 0 1 1 1 1 0 
//        4 7
//        1 4