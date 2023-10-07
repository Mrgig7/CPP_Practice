#include <iostream>
using namespace std;

// Function to reverse an array from start to end
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate an array to the right by k positions
void rotateArray(int arr[], int n, int k) {
    if (n <= 1 || k == 0) {
        return;
    }

    // Ensure k is non-negative
    k = (k % n + n) % n;

    // Reverse the entire array
    reverseArray(arr, 0, n - 1);

    // Reverse the first k elements
    reverseArray(arr, 0, k - 1);

    // Reverse the remaining elements
    reverseArray(arr, k, n - 1);
}

int main() {
    int arr[100]; // Assuming a maximum array size of 100
    int n = 0;    // Current size of the array

    // Input the array elements until a negative number is entered
    int num;
    while (true) {
        cin >> num;
        if (num < 0) {
            break; // Exit the loop when a negative number is entered
        }
        arr[n] = num;
        n++;
    }

    int k;
    cin >> k;

    // Rotate the array
    rotateArray(arr, n, k);

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
