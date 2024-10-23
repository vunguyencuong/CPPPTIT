#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    while(true)
    {
        string s;
        cin>> s;
        if(s == "END.") return 0;
        else if(s == "1")
        {
            int num;
            cin>> num;
            a.push_back(num);
            cout<< "NEW";
        }
        else if(s == "2")
        {
            for(int i = 0; i < a.size(); i++)
            {
                cout<< a[i] << " ";
            }
            a.clear();
        }
        cout<< endl;
    }
}