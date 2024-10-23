// 2^0 % 5 = 1  =>> 2^n % 5  n % 4 == 0 => du 1
// 2^1 % 5 = 2      n % 4 == 1 => du 2
// 2^2 % 5 = 4      n % 4 == 2 => du 4
// 2^3 % 5 = 3      n % 4 == 3 => du 3
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int len = s.length()-1;
        int mod = 0;
        for(int i = 0; i <= len; i++)
        {
            if(s[i] == '1')
            {
                int x = len - i;
                if(x % 4 == 0) mod += 1;
                else if(x % 4 == 1) mod += 2;
                else if(x % 4 == 2) mod += 4;
                else if(x % 4 == 3) mod += 3;
            }
        }
        if(mod % 5 == 0) cout<< "Yes" << endl;
        else cout<< "No" << endl;
    }
}