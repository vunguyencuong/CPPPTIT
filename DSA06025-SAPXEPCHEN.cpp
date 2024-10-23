#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>> n;
    int a[1005] = {};
    int x;
    int size = 1;
    for(int i = 1; i <= n; i++)
    { 
        cin>> x;
        int pos = size;
        a[size] = x;
        while(pos > 1 && a[pos] < a[pos-1])
        {
            swap(a[pos],a[pos-1]);
            pos--;
        } 
        cout<< "Buoc " << i-1 << ": ";
        for(int j = 1; j <= size; j++)
        {
            cout<< a[j] << " ";
        }
        cout<< endl;
        size++;
    }

}