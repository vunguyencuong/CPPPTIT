#include<bits/stdc++.h>
using namespace std;

struct data
{
    int chu;
    int tanso;
};

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int k;
        cin>> k;
        vector<data> alphabet;
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            int check = 0;
            for(int j = 0; j < alphabet.size(); j++)
            {
                if(alphabet[j].chu == (int)s[i])
                {
                    check = 1;
                    alphabet[j].tanso++;
                }
            }
            if(check == 0)
            {
                data b;
                b.chu = (int)s[i];
                b.tanso = 1;
                alphabet.push_back(b);
            }
        }
        int len2 = alphabet.size();
        int count =0;
        for(int i = 0; i < len2; i++)
        {
            if(alphabet[i].tanso > 1) count += alphabet[i].tanso-1;
        }
       // cout<< count << " " << len2;
       if((26-len2 <= count && 26-len2 <= k) || len2 >= 26) cout<< 1 << endl;
       else cout<< 0 << endl;
    }
}