#include<bits/stdc++.h>
using namespace std;

struct data
{
    int row;
    int col;
};

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,m;
        cin>> n >> m;
        int a[n][m];
        vector<data> v;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>> a[i][j];
                if(a[i][j] == 1)
                {
                    data b;
                    b.row = i;
                    b.col = j;
                    v.push_back(b);
                }
            }
        }
        for(int k = 0; k < v.size(); k++)
        {
            for(int j = 0, i = v[k].row; j < m; j++)
            {
                a[i][j] = 1;
            }
            for(int i = 0, j = v[k].col; i < n; i++)
            {
                a[i][j] = 1;
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout<< a[i][j] << " ";
            }
            cout<< endl;
        }
    }
}