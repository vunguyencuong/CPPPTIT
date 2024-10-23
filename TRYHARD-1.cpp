#include<bits/stdc++.h>
using namespace std;

int divide(int a[], int l, int r)
{
    int pivot  = a[r];
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
{
    if(l < r)
    {
        int pivot = divide(a,l,r);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,r);
    }
}

bool check(int n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>> n;
    int a[n+5];
    for(int i = 1; i <= n ;i++)
    {
        cin>> a[i];
    }
    quicksort(a,1,n);
  /*  for(int i = 1; i <= n ; i++)
    {
        cout<< a[i] << " ";
    }
    */
   // cout<< endl;
    int b[n+5];
    int c = 1;
    for(int i = 1; i < n;i++)
    {
        if(a[i] != 0)
        {
            for(int j = i+1; j <= n; j++)
            {
                if(a[i] == a[j])
                {
                    a[j] = 0;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(check(a[i])) 
            cout<< a[i] << " ";
    }
    

}