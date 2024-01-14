#include <iostream>
#include <algorithm> // Include the algorithm header for swap
using namespace std;

// Recursive function to reverse elements in the array
void fxn(int arr[], int l, int r) {
    // Base case: if left index is greater than or equal to right index, return
    if (l >= r) {
        return;
    }

    // Swap the elements at indices l and r in the array
    swap(arr[l], arr[r]);

    // Recursive case: call fxn with updated left and right indices
    fxn(arr, l + 1, r - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int l = 0; // Initialize left index
    int r = 4; // Initialize right index

    // Call the recursive function to reverse the array
    fxn(arr, l, r);

    // Output: Display the reversed array
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
