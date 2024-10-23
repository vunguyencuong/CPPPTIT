#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[] = {12 , 23 , 34, 45, 56, 67, 78, 89,
                123, 234, 345, 456, 567, 678, 789, 
                1234, 2345, 3456, 4567, 5678, 6789,
                12345, 23456, 34567, 45678, 56789,
                123456, 234567, 345678, 456789,
                1234567, 2345678, 3456789,
                12345678, 23456789, 123456789, 1000000000};
    int size = sizeof(a) / sizeof(int) - 1;
    int low, high;
    cin>> low >> high ; 
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] >=  low && a[i] <= high)
        {
            count++;
        }
    }
    cout<< count << endl;
    cout<< "[";
    for(int i = 0; i < size; i++)
    {
        if(a[i] >=  low && a[i] <= high && a[i+1] <= high)
        {
            cout<< "["<<a[i] << "], ";
        }
        else if(a[i] >=  low && a[i] <= high && a[i+1] > high)
        {
            cout<< "[" << a[i] << "]" << "]";
        }
    }
}