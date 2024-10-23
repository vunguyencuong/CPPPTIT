#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,s;
    cin>> m >> s;
    if(m*9 < s || s == 0) cout<< -1 << " " << -1 << endl;
    else
    {
        int max[m] = {0};
        int min[m] = {0};
        int mem = s;
        for(int i = 0; i < m; i++)
        {
            if(s > 9)
            {
                max[i] = 9;
                s -= 9;
            }
            else
            {
                max[i] = s;
                s = 0;
            }
        }
        s = mem;
        for(int i = m-1; i >= 0; i--)
        {
            if(s > 9)
            {
                min[i] = 9;
                s -= 9;
            }
            else
            {
                if(i == 0) min[0] = s;
                else
                {
                    min[i] = s-1;
                    min[0] = 1;
                    break;
                }
                
            }
        }
        for(int i = 0; i < m; i++) cout<< min[i];
        cout<< " ";
        for(int i = 0; i < m; i++) cout<< max[i];
        cout<< endl;
    }
}















