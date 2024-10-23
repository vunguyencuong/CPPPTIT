#include <iostream>
using namespace std;

int main(){
	int n; 
	cin>> n;
	for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
// n = 3
// i = 0 : j = 0-0: *
// i = 1: j = 0-1: *\n**
// i = 2: j = 0-2: *\n**\n***
