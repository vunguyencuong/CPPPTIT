#include<bits/stdc++.h>
using namespace std;
int n;
int a[50];
int k,stop;

void in()
{
    cout<< '(';
    if(k == 1) cout<< a[1];
    else{
        for(int i = 1; i < k; i++)
        {
            cout<< a[i] << " ";
        }
        cout<< a[k];
    }
    cout<< ')' << " ";
}

void Try(){
    int i = k;
    int R,S,D;
    while(i > 0 && a[i] == 1) i--;
    if(i > 0)
    {
        a[i] = a[i] - 1;
        D = k-i+1;
        R = D / a[i];
        S = D % a[i];
        k = i;
        if(R > 0)
        {
            for(int j = i+1; j <= i+R; j++)
            {
                a[j] = a[i];
            }
            k = k+R;
        }
        if(S > 0)
        {
            k++; a[k] = S;
        }
    }
    else stop = true;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        cin>> n;
        k = 1; a[k] = n;
        stop = false;
        while(!stop)
        {
            in();
            Try();
        }
        cout<< endl;
    }
}