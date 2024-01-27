#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declare an integer variable to store the size of the array
    int n;
    // Take user input for the size of the array
    cin >> n;

    // Declare an array to store integers
    int arr[n];
    // Loop to take user input for the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Declare an unordered_map to store the count of each integer in the array
    unordered_map<int, int> mpp;
    // Loop to count the occurrences of each integer in the array
    for (int i = 0; i < n; i++) {
        mpp[arr[i]] += 1;
    }

    // Declare an integer variable to store the number of queries
    int q;
    // Take user input for the number of queries
    cin >> q;

    // Loop to answer queries about the count of specific integers
    while (q--) {
        // Declare an integer variable to store the queried integer
        int number;
        // Take user input for the queried integer
        cin >> number;
        // Output the count of the queried integer
        cout << mpp[number] << endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}