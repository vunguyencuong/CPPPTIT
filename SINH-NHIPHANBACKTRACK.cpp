#include <iostream>
using namespace std;

void generateBinary(int n, string current) {
    if (n == 0) {
        cout << current << endl;
    } else {
        generateBinary(n - 1, current + "0");
        generateBinary(n - 1, current + "1");
    }
}

int main() {
    int n;
    cin >> n;
    generateBinary(n, "");
    return 0;
}

