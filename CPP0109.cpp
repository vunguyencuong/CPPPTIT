#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    int count1 = 0, count2 = 0;
    while(n)
    {
        int m = n%10;
        if(m % 2 == 0) count1++;
        else count2++;
        n /= 10;
    }
    if(count1 == count2) return 1;
    else return 0;
}
int main()
{
    int n;
    cin>> n;
    int m = n-1;
    int a = 1;
    int b = 9;
    while(m--)
    {
        a *= 10;
        b = b*10 + 9;
    }
    int count =0;
    for(int i = a; i <= b; i++)
    {
        if(check(i) == 1)
        {
            cout<< i << " ";
            count++;
        }
        if(count != 0 && count % 10 == 0) cout << endl;
    }

}