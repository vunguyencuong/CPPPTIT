#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<< "So tang cau khach san: ";
	cin>> n;
	if(n <= 1)
	{
		cout<< "So tang khong hop le";
		return 0;
	}
	int rooms = 0,roomins = 0;
	for(int i = 1; i <= n ; i++ )
	{
		if(i != 13)
		{
			int room, roomin;
			cout<< "So phong cua tang"<< " " << i <<":";
			cin>> room;
			if(room < 10)
			{
				cout<< "So phong khong hop le";
				return 0;
				break;
			}
			cout<< "So phong duoc su dung cua tang" << " " << i <<":";
			cin>> roomin;
			rooms += room;
			roomins += roomin;
		}
	}
	cout<< "So phong cua khach san: "<< " " << rooms << endl;
	cout<< "So phong dang duoc su dung: "<< " " << roomins << endl;
	cout<< "So phong chua su dung: " << " " << rooms-roomins << endl;
	cout<< "Ty le phong co nguoi: " << " " << ((double)roomins/rooms)*100 << "%" << endl;
	return 0;
}
