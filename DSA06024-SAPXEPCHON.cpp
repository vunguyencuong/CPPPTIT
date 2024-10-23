#include<bits/stdc++.h>

using namespace std;

void in(vector<int> a)
{
    for(int i: a) cout<< i << " ";
    cout<< endl;
}

int main()
{
    int n; cin>> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>> a[i];
    for(int i = 0; i < n-1; i++)
    {
        int minid = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[minid])
            {
                minid = j;
            }
        }
        swap(a[i],a[minid]);
        cout<< "Buoc " << i+1 << ": ";
        in(a);
    }
}