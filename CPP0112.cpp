#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        double x1,y1,x2,y2;
        cin>> x1 >> y1 >> x2 >> y2;
        double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        cout<< fixed << setprecision(4) << d << endl;
    }
}