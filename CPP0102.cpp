#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        char a;
        cin>> a;
        if(a >= 'A' && a <= 'Z') a += 32;
        else a -= 32;
        cout<< a << endl;
    }
}