#include <iostream>
#include <cmath>

using namespace std;

double tinhDienTichTamGiac(double a, double b, double c) {
    // Kiểm tra điều kiện tam giác
    if (a + b > c && a + c > b && b + c > a) {
        // Tính nửa chu vi
        double s = (a + b + c) / 2;
        // Tính diện tích theo công thức Heron
        double dienTich = sqrt(s * (s - a) * (s - b) * (s - c));
        return dienTich;
    } else {
        cout << "Ba cạnh không tạo thành tam giác!" << endl;
        return -1; // Trả về giá trị lỗi
    }
}

int main() {
    double a, b, c;

    // Nhập độ dài 3 cạnh
    cout << "Nhập cạnh a: ";
    cin >> a;
    cout << "Nhập cạnh b: ";
    cin >> b;
    cout << "Nhập cạnh c: ";
    cin >> c;

    // Tính diện tích tam giác
    double dienTich = tinhDienTichTamGiac(a, b, c);

    // Hiển thị kết quả
    if (dienTich != -1) {
        cout << "Diện tích tam giác là: " << dienTich << endl;
    }

    return 0;
}
