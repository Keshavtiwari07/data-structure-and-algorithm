#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare a string variable to store the input string
    string st;
    // Take user input for the string
    cin >> st;

    // Declare an integer variable to store the length of the string
    int n;
    // Take user input for the length of the string
    cin >> n;

    // Declare an unordered_map to store the count of each character in the string
    unordered_map<int, int> mpp;

    // Loop to count the occurrences of each character in the string
    for (int i = 0; i < n; i++) {
        mpp[st[i]]++;
    }

    // Declare an integer variable to store the number of queries
    int q;
    // Take user input for the number of queries
    cin >> q;

    // Loop to answer queries about the count of specific characters
    while (q--) {
        // Declare a character variable to store the queried character
        char c;
        // Take user input for the queried character
        cin >> c;
        // Output the count of the queried character
        cout << mpp[c] << endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}