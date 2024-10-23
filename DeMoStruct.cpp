#include<bits/stdc++.h>
using namespace std;
struct Car
{
	string owner;
	string brand;
	string color;
	int weight;
	int height;
	int width;
};
struct People
{
 	char name[100];
	char age[100];
	char phone[100];
	Car car;
	
};
void getInfor(People& s)
{
	 cout<< "Enter name: ";
	 cin.getline(s.name, 99);
	 
	 cout<< "Enter age: ";
	 cin>> s.age;
	 
	 cout<< "Enter phone: ";
	 cin>> s.phone;
	 
	 cin.ignore();
	 
	 //cout<< "Car Owner: ";
	// cin.getline(s.Car.owner);
	 
	 cout<< "Car Brand: ";
	 cin>> s.car.brand;
	 
	 cout<< "Car weight: ";
	 cin>> s.car.weight;
	 
	 cout<< "Car height: ";
	 cin>> s.car.height;
	 
	 cout<< "Car width: ";
	 cin>> s.car.width;
	 
}

void showInfor(People& s)
{
	cout<< "===== Customer =====\n";
	cout<< "Name: " << s.name << endl;
	cout<< "Age: " << s.age << endl;
	cout<< "Phone: " << s.phone << endl;
	cout<< "Car Brand: "<< s.car.brand << endl;
	cout<< "Car Weight: " << s.car.weight << endl;
	cout<< "Car Width: " << s.car.width << endl;
	cout<< "=====================\n";
	
}

int main()
{
	People s;
	getInfor(s);
	showInfor(s);
}
