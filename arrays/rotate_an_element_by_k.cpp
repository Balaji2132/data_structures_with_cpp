#include <iostream>
using namespace std;

// Function to rotate an element in the array by k positions
void rotateElement(int arr[], int n, int k, int index) {
    k = k % n; //In case k is greater than n.

    if (k < 0) {
        k = k + n; // In case k is negative.
    }

    int newIndex = (index + k) % n;
    int temp = arr[index];

    if (k > 0) {
        for (int i = index; i < newIndex; i++) {
            arr[i] = arr[i + 1];
        }
    }
    else {
        for (int i = index; i > newIndex; i--) {
            arr[i] = arr[i - 1];
        }
    }

    arr[newIndex] = temp;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "\nEnter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cout << "\nEnter" << "[" << i << "]" << "element of the array: ";
        cin >> arr[i];
    }

    int k, index;
    cout << "\nEnter the index of the element to rotate: ";
    cin >> index;
    cout << "\nEnter the number of positions to rotate: ";
    cin >> k;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateElement(arr, n, k, index);

    cout << "Array after rotating element at index " << index << " by " << k << " positions: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}