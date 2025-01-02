#include <iostream>
using namespace std;

// Hàm để hoán đổi hai giá trị
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm phân chia mảng và chọn phần tử chốt (pivot)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Chọn phần tử cuối làm chốt
    int i = (low - 1);      // Chỉ số của phần tử nhỏ hơn

    for (int j = low; j <= high - 1; j++) {
        // Nếu phần tử hiện tại nhỏ hơn chốt
        if (arr[j] < pivot) {
            i++;  // Tăng chỉ số phần tử nhỏ hơn
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Hàm thực hiện Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Chỉ số phân chia là pi
        int pi = partition(arr, low, high);

        // Gọi đệ quy cho các phần mảng trước và sau phân chia
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm in mảng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Hàm chính
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Mảng trước khi sắp xếp: ";
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    cout << "Mảng sau khi sắp xếp: ";
    printArray(arr, n);
    return 0;
}
