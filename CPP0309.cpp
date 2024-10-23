#include<bits/stdc++.h>
using namespace std;
 
/*struct data     bai nay khong phuc tap den the, co bao nhieu tu dem bay nhieu thoi
{
    string word;
    int tanso;
};
*/
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin.ignore();
        getline(cin,s);
        int count = 0;
        stringstream ss(s);
      //  vector<data> v;
        for(string token; ss >> token; count++);
        /*{
            int check = 0;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].word.compare(token) == 0)
                {
                    v[i].tanso++;
                    check = 1;
                }
            }   
            if(check == 0)
            {
                data b;
                b.word = token;
                b.tanso = 1;
                v.push_back(b);
            }
        }
        */
        cout<< count << endl;
    }
}