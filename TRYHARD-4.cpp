#include<bits/stdc++.h>
using namespace std;

int divide(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l;
    int j = r-1;
    while(true)
    {
        while(a[i] < pivot && i <= j) i++;
        while(a[j] > pivot && i <= j) j--;
        if(i >= j) break;
        swap(a[i],a[j]);
        i++,j--;
    }
    swap(a[i],a[r]);
    return i;
}
void quicksort(int a[], int l, int r)
{   if(l < r)
    {
        int pivot = divide(a,l,r);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,r);
    }

}

int main()
{
    int m,n,i;
    cin>> m >> n >> i;
    int a[m+5][n+5];
    for(int k = 1; k <= m; k++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>> a[k][j];
        }
    }
    int b[n+5];
    int c= 1;
    for(int k = 1; k <= n; k++)
    {
        b[c] = a[i][k];
        c++;
    }
    quicksort(b,1,n);
    for(int k = 1; k <= m; k++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(k == i)
            {
                cout<< b[j] << " ";
            }
            else
            {
                cout<< a[k][j] << " ";
            }
        }
        cout<< endl;
    }

}