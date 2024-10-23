#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
    cin.ignore();
	while(t--)
	{
		string b;
		getline (cin, b);
		if (b[5]<b[6] && b[6]<b[7] && b[7]<b[9] && b[9]<b[10]) cout<<"YES\n";
		else if (b[5]==b[6] && b[6]==b[7] && b[7]==b[9] && b[9]==b[10]) cout<<"YES\n";
		else if (b[5]==b[6] && b[6]==b[7] && b[9]==b[10]) cout<<"YES\n";
		else if ((b[5]=='6'||b[5]=='8')&& (b[6]=='6'||b[6]=='8') && (b[7]=='6'||b[7]=='8')
		 && (b[9]=='6'||b[9]=='8') && (b[10]=='6'||b[10]=='8')) cout<<"YES\n";
		else if(b[5]<b[6] && b[6]<b[7] && b[9] == b[10]) cout<< "NO\n";
        else if(b[5]==b[6] && b[6]==b[7] && b[9] > b[10]) cout<< "NO\n";
        else if((b[5] !='6'&& b[5]!='8') || (b[6]!='6'&&b[6]!='8') || (b[7]!='6'&&b[7]!='8')
		 || (b[9]=='6'&&b[9]=='8') || (b[10]=='6'&&b[10]=='8')) cout<< "NO\n";
	
	//	cout<< b.length() << endl;
	//	cout<< b[7] << " " << b[8];
        /*for(int i = 0; i < b.length(); i++)
        {
            cout<< i << " " << b[i] << endl;
        }
        */
 	}  
	return 0; 
}
 