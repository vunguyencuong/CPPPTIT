#include<bits/stdc++.h>
using namespace  std;
/*
int divide(int a[], int l,int r)
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
    }
    swap(a[i], a[r]);
    return i;
}
void quicksort(int a[], int l , int r)
{
    if(l < r)
    {
        int pivot = divide(a,l,r);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,r);
    }
}
*/
int main()
{
    int m,n,k;
    cin>> m >> n >> k;
    int a[100][100];
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j<= n; j++)
        {
            cin>> a[i][j];
        }
    }
    int b[100];
    for(int i = 1; i <= m; i++)
    {
        b[i] = a[i][k];
    }
    sort(b+1,b+m+1);
   /* for(int i = 1; i <= m; i++)
    {
        cout<< b[i] << " ";
    }
    cout<< endl ;
    */
    //quicksort(b,1,m);
    //sort(b+1,b+m+1);
    for(int i= 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == k)
            {
                cout<< b[i] << " ";
            }
            else cout<< a[i][j] << " ";
        }
        cout<< endl;
    }
    
    
} 

