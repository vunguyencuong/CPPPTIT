// #include<bits/stdc++.h>
// using namespace std;

// long long calculateExpression(string expression) {
//     istringstream iss(expression);
//     long long result, num;
//     char op;

//     // Đọc giá trị đầu tiên từ biểu thức
//     iss >> result;

//     // Duyệt qua các phép toán và giá trị còn lại trong biểu thức
//     while (iss >> op >> num) {
//         if (op == '+') {
//             result += num;
//         } else if (op == '-') {
//             result -= num;
//         }
//     }

//     return result;
// }

// int main() {

//     ifstream inputFile("ADDSUBTRACT.INP");
//     ofstream outputFile("ADDSUBTRACT.OUT");
//     string expression;
//     // Đọc từng dòng từ file đầu vào
//     while (getline(inputFile, expression)) {
//         // Tính giá trị của biểu thức
//         long long result = calculateExpression(expression);

//         // Ghi kết quả vào file đầu ra
//         outputFile << result << endl;
//     }
//     // Đóng file
//     inputFile.close();
//     outputFile.close();
//     return 0;
// }


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

long long calculateExpression(string expression) {
    istringstream iss(expression);
    long long result, num;
    char op;

    stack<long long> numbers;

    // Duyệt qua từng phần tử trong biểu thức
    while (iss >> num) {
        numbers.push(num);

        // Nếu có phép toán, thực hiện tính toán
        if (iss >> op) {
            if (op == '+') {
                // Do nothing, vì phép cộng không ảnh hưởng đến kết quả của phép trừ
            } else if (op == '-') {
                // Nếu gặp phép trừ, thực hiện tính toán và lưu vào stack
                long long nextNum;
                iss >> nextNum;
                numbers.top() -= nextNum;
            }
        }
    }

    // Tính tổng các giá trị còn lại trong stack
    long long finalResult = 0;
    while (!numbers.empty()) {
        finalResult += numbers.top();
        numbers.pop();
    }

    return finalResult;
}

int main() {
    ifstream inputFile("ADDSUBTRACT.INP");
    ofstream outputFile("ADDSUBTRACT.OUT");


    string expression;
    stack<int> results;

    while (getline(inputFile, expression)) {
        long long result = calculateExpression(expression);
        results.push(result);
    }

    while (!results.empty()) {
        outputFile << results.top() << endl;
        results.pop();
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
