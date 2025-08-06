
#include <iostream>
using namespace std;

// Function to print the array
void print(int arr[], int n) {
    for (int i = 1; i < n; i++) { // Start from index 1 for 1-based indexing
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to heapify the subtree rooted at index `i`
void heapify(int arr[], int i, int n) {
    int j = i;
    while (true) {
        int l = 2 * j;     // Left child index
        int r = 2 * j + 1; // Right child index

        // If no children exist, break
        if (l >= n) {
            break;
        }

        // If only left child exists
        if (l == n - 1) {
            if (arr[l] < arr[j]) {
                swap(arr[j], arr[l]);
            }
            break;
        }

        // Compare left and right children, and swap with the smaller one
        if (arr[l] < arr[r]) {
            if (arr[j] > arr[l]) {
                swap(arr[j], arr[l]);
                j = l; // Move to left child
            } else {
                break;
            }
        } else {
            if (arr[j] > arr[r]) {
                swap(arr[j], arr[r]);
                j = r; // Move to right child
            } else {
                break;
            }
        }
    }
}

int main() {
    int arr[] = {0, 10, 2, 14 , 11, 1 ,4}; // 0th index unused for 1-based indexing
    int size = sizeof(arr) / sizeof(arr[0]);

    // Start heapification from the last non-leaf node
    for (int i = (size - 1) / 2; i >= 1; i--) { // Start at (size-1)/2 for 1-based indexing
        heapify(arr, i, size);
    }

    print(arr, size); // Print the resulting min-heap
    return 0;
}
