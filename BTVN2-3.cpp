#include <iostream>
using namespace std;

int main(){
	int n; 
	cin>> n;
	for (int i = 0; i < n; i++) {
        // In khoang trong phía truoc dau '*'
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // In dau '*'
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
