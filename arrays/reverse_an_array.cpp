#include<iostream>
using namespace std;
void reverseArray(int arr[], int n, int reversedArr[]) {
    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1];
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n], reversedArr[n];
    cout << "\nEnter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cout << "\nEnter" << "[" << i << "]" << "element of the array: ";
        cin >> arr[i];
    }
    cout << "Given Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    reverseArray(arr, n, reversedArr);
    cout << "\nRevered array: ";
    for (int i = 0; i < n; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;
    return 0;
}
