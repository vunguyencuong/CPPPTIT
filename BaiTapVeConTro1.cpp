#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5],i;
    int *p =a;
    cin>> *p >> *(p+1) >> *(p+2) >> *(p+3) >> *(p+4);
    for(int i = 0; i < 5; i++)
    {
        cout<< a[i] << " ";
    }
}