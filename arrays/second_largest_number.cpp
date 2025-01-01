#include<iostream>
#include<climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have atleast 2 elements." << endl;
        return INT_MIN;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no distinct second largest element." << endl;
        return INT_MIN;
    }

    return secondLargest;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int arr[n];
    cout << "\nEnter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nEnter" << "[" << i << "]" << "element of the array: ";
        cin >> arr[i];
    }

    cout << "Given Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int result = findSecondLargest(arr, n);
    if (result != INT_MIN) {
        cout << "\nThe second Largest Element: " << result << endl;
    }

    return 0;
}