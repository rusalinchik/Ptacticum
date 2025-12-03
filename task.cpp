#include <iostream>
using namespace std;

int min(const int* arr, int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Введите числа:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minimum = min(arr, n);
    cout << "Минимум: " << minimum << endl;

    delete[] arr;
    return 0;
}