#include <iostream>
#include <vector>
using namespace std;

// Hàm xóa một dòng từ ma trận
void removeRow(vector<vector<int>>& matrix, int rowIndex) {
    matrix.erase(matrix.begin() + rowIndex);
}

// Hàm xóa một cột từ ma trận
void removeColumn(vector<vector<int>>& matrix, int columnIndex) {
    for (int i = 0; i < matrix.size(); i++) {
        matrix[i].erase(matrix[i].begin() + columnIndex);
    }
}

int main() {
    // Tạo một ma trận ví dụ
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // In ma trận ban đầu
    cout << "Ma trận ban đầu:" << std::endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << ' ';
        }
        cout << std::endl;
    }

    // Xóa dòng 1 (dòng thứ 2)
    removeRow(matrix, 1);

    // In ma trận sau khi xóa dòng
    std::cout << "Ma trận sau khi xóa dòng:" << std::endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << ' ';
        }
        std::cout << std::endl;
    }

    // Xóa cột 1 (cột thứ 2)
    removeColumn(matrix, 1);

    // In ma trận sau khi xóa cột
    std::cout << "Ma trận sau khi xóa cột:" << std::endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
