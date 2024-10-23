#include <iostream>
#include <vector>
using namespace std;
void generateTernary(int n, string current) {
    if (n == 0) {
        cout << current << endl;
    } else {
        generateTernary(n - 1, current + "0");
        generateTernary(n - 1, current + "1");
        generateTernary(n - 1, current + "2");
    }
}

int main() {
    int n;
    cin >> n;
    generateTernary(n, "");
    
    return 0;
}

