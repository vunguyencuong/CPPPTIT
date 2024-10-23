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
        int len = s.length();
        int check = 0;
        for(int i = len-2; i > 0; i--)
        {
            if(s[i+1] < s[i])   // tìm chữ số đầu tiên nhỏ hơn chữ số đằng trước nó 
            {
                check = 1;
                int a = 0, k;
				for(int j = i+1; j < len; j++) // tìm từ vị trí đó tới cuối
				{
					if(s[j] < s[i]) // tìm chữ số nhỏ hơn s[j] để đảo lên thành số lớn nhất nhỏ hơn số ban đầu
					{
						if(s[j] > a) // a có vai trò tìm ra được chữ số lớn nhất mà nhỏ hơn s[j]
						{
							a = s[j];
							k = j; // lưu lại vị trí của chữ số max < s[j] này
						}
					}
				}                
				swap(s[i],s[k]);
				break;
            }
        }
        if(check == 0) cout<< -1 << endl;
        else
        {
            cout<< s << endl;
        }
    }
}