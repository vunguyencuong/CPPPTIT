#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        char a[1000];
        for(int i = 0; i < n; i++)
        {
            a[i] = 'A';
        }
        for(int i = 0; i < n; i++)
        {
            cout<< a[i];
        }
        cout<< " ";
        
        int i = n-1;
        while(i >= 0)
        {
            if(a[i] == 'B')i--;
            if(a[i] == 'A')
            {
                a[i] = 'B';
                for(int j = i + 1; j < n; j++)
                {
                	a[j] = 'A';
				}
                for(int j = 0; j < n; j++)
                {
                    cout<< a[j];
                }
                cout<< " ";
                i = n-1;
            }
        }
        cout<< endl;
    }   
    return 0;
}

