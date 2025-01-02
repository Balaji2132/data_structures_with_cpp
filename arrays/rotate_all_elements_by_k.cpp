#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case k is greater than n
     if (k < 0) {
        k = n + k; // In case k is negative.
    }
    int temp[k];

    // Store the last k elements in temp array.
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    //Shift the rest of the array.
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    //Copy the elements of temp array to the beginning original array.
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() 
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements of the array: ";
    for (int i = 0; i < n; i++) {
         cout << "\nEnter" << "[" << i << "]" << "element of the array: ";
        cin >> arr[i];
    }
    cout << "Given Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nEnter the value of k: ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}