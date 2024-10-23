#include<bits/stdc++.h>
using namespace std;

int divide(int b[], int l, int r)
{   
    int pivot = b[r];
    int i = l, j = r-1;
    while(true)
    {
        while(b[i] < pivot && i <= j) i++;
        while(b[j] > pivot && i <= j) j--;
        if(i >= j) break;
        swap(b[i],b[j]);
        i++; j--; 
    }
    swap(b[i],b[r]);
    return i;
}
void Sort(int b[], int l, int r)
{
    if(l < r)
    {
        int pivot = divide(b,l,r);
        Sort(b,l,pivot-1);
        Sort(b,pivot+1,r);
    }
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string a,s;
        cin>> a; cin>> s;
        int len1 = a.length(), len2 = s.length();
        int b[len2+5]={};
        for(int i = 0; i < len2; i++)
        {
            b[i] = s[i];
        }
        Sort(b,0,len2-1); // sắp xếp lại các chữ số của mảng s 
        int j = len2-1;
        for(int i = 0; i < len1; i++)
        {
            if(a[i] < b[j] && j >= 0)
            {
                a[i] = b[j];
                j--;
            }
        }
        cout<< a << endl;
    }
}