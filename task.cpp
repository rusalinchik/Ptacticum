#include <iostream>
using namespace std;

int max(const int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
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

    int maximum = max(arr, n);
    cout << "Максимум: " << maximum << endl;

    delete[] arr;
    return 0;
}