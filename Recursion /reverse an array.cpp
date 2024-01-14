#include <iostream>
#include <algorithm> // Include the algorithm header for swap
using namespace std;

void fxn(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    swap(arr[l], arr[r]);
    fxn(arr, l + 1, r - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int l = 0; // Initialize l
    int r = 4; // Initialize r

    fxn(arr, l, r);

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
