#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s1 = "ABBADCCABDCCABD";
        string s2 = "ACCABCDDBBCDDBB";
        vector<char> v(15);
        int made;
        cin>> made;
        for(int i = 0; i < 15; i++)
        {
            cin>> v[i];
        }
       // for(int i = 0; i < 15; i++) cout<< v[i];
        int corrects = 0;
        if(made == 101)
        {
            for(int i = 0; i < 15; i++)
            {
                if(v[i] == s1[i]) corrects++;
            }
        }
        else{
            for(int i = 0; i < 15; i++)
            {
                if(v[i] == s2[i]) corrects++;
            }
        }
        double points =(double) corrects*10/15;
        printf("%.2f\n",points);
    }
}