#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin>> n;
        string s;
        cin>> s;
        int len = s.length()-1;
        int i = len-1;
        while(i >= 0 && s[i] >= s[i+1]) i--;
        if(i > -1)
        {
            int k = len;
            while(s[i] >= s[k]) k--;
            swap(s[i],s[k]);
            int l = i+1, r = len;
            while(l <= r)
            {
                swap(s[l],s[r]);
                l++,r--;
            }
            cout<< n << " " << s << endl;
        }
        else cout<< n << " " << "BIGGEST" << endl;
    }    
}

// 2 7 9 1 3 4 3 9 9 7 4 2
// 2 7 9 1 3 4 4 9 9 7 3 2
// 2 7 9 1 3 4 4 2 3 7 9 9
// 2 7 9 1 3 4 4 2 3 7 9 9

// 2 7 9 1 3 4 3 9 2 4 7 9