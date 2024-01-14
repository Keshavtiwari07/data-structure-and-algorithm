#include <bits/stdc++.h> // This is not recommended, use specific headers instead.
using namespace std;

// Recursive function that prints "keshav" i to n times
int fxn(int i, int n) {
    // Base case: if i exceeds n, return 0
    if (i > n) {
        return 0;
    }

    // Output: Print "keshav" followed by a newline
    cout << "keshav" << endl;

    // Recursive case: call fxn with incremented i and the same n
    return fxn(i + 1, n);
}

int main() {
    int n;
    int i = 1;

    // Input: Get the value of n from the user
    cin >> n;

    // Call the recursive function fxn with initial values i and n
    fxn(i, n);

    return 0;
}
