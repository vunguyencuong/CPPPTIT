#include <iostream>
using namespace std;
 
int main ()
{
    int ms[9];
    for (int i=1; i<=8; i++)
    {
        cin>>ms[i];
    }
    int isUp=1;
    int isDown=1;
    for (int i=1; i<8; i++)
    {
        if (ms[i]>ms[i+1])  isUp=0;
        if (ms[i]<ms[i+1])  isDown=0;
    }
    if (isUp==1 && isDown==0) cout<<"ascending";
    else if (isUp==0 && isDown==1) cout<<"descending";
    else cout<<"mixed";
   
    return 0;
}
