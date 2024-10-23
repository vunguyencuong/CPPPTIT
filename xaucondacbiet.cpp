#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isConsonant(char c) {
    return !isVowel(c);
}

int countSpecialSubstringsStartingFrom(string s, int start) {
    int count = 0;
    int n = s.length();
    char startChar = s[start];
    
    if (isVowel(startChar)) {
        for (int i = start + 1; i < n; ++i) {
            if (isConsonant(s[i])) {
                ++count;
            } else {
                break;
            }
        }
    } else {
        for (int i = start + 1; i < n; ++i) {
            if (isVowel(s[i])) {
                ++count;
            } else {
                break;
            }
        }
    }
    
    return count;
}

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    int totalCount = 0;
    
    for (int i = 0; i < n; ++i) {
        totalCount += countSpecialSubstringsStartingFrom(s, i);
    }
    
    cout << totalCount << endl;
    
    return 0;
}
