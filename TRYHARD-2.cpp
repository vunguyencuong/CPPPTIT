#include<bits/stdc++.h>
using namespace std;

int divide(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l;
    int j = r-1;
    while(true)
    {
        while(a[i] > pivot && i <= j) i++;
        while(a[j] < pivot && i <= j) j--;
        if(i >= j) break; 
        swap(a[i],a[j]);
        i++,j--;
    }
    swap(a[i],a[r]);
    return i;
}
void quicksort(int a[], int l ,int r)
{
    if(l <= r)
    {
        int pivot = divide(a,l,r);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,r);
    }
}

int main()
{
    int n;
    cin>> n;
    int a[n+5];
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i];
    }
    quicksort(a,1,n);
    for(int i = 1; i <= n; i++)
    {
        cout<< a[i] << " ";
    }

}