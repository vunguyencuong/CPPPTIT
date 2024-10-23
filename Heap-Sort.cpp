#include<bits/stdc++.h>
using namespace std;

void Caynhiphan(int a[], int n, int i)
{
    int largest = i; // nút cha to nhất
    int l = 2*i + 1; // nút con bên trái
    int r = 2*i + 2; // nút con hơn bên phải
    // nếu nút con bên trái lớn hơn nút cha
    if(l < n && a[l] > a[largest])
        largest = l;

    // nếu nút con bên phải lớn hơn nút cha
    if(r < n && a[r] > a[largest])
        largest = r;

    if(largest != i) // nếu giá trị lớn nhất nằm tại nút ko phải nút cha
    {
        swap(a[i],a[largest]); // đưa giá trị lớn nhất lên nút cha
        Caynhiphan(a,n,largest);
    }
}

void HeapSort(int a, int n)
{
    for(int i = n/2 - 1; i >= 0 ; i--)
    {
        Caynhiphan(a,n,i);
    }
    for(int i = n-1; i > 0; i--)
    {
        swap(a[0],a[i]); // đưa giá trị lớn nhất xuống cuối
        Caynhiphan(a,i,0); 
    }

}

int main()
{
    int n;
    cin>> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin>> a[i];
    HeapSort(a,n);
    for(int i = 0; i < n; i++) cout<< a[i] << " ";
}