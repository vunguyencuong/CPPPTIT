#include<bits/stdc++.h>
using namespace std;
 
vector<int> check(123456*2+2,1);
void Snt()
{
    check[0] = check[1] = 0;
    for(int i = 2; i*i < 123456*2+2; i++)
    {
        for(int j = i*i; j < 123456*2+2; j += i)
        {
            if(check[j] == 1)
            {
                check[j] = 0;
            }
        }
    }
    for(int i = 2; i <= 123456*2+2; i++)
    {
        check[i] += check[i-1];
    }
    
}
int main()
{
    Snt();
    while(true)
    {
        int n;
        cin>> n;
        if(n == 0) return 0;
        cout<< check[2*n] - check[n] << endl;
 
    }
    return 0;
} 
