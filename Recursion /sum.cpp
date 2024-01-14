#include <iostream>
using namespace std;

// Recursive function to calculate the sum of integers from 1 to n
int sum(int n) {
    // Base case: if n is 0, return 0
    if (n == 0)
        return 0;

    // Recursive case: return the sum of n and the sum of integers from 1 to (n-1)
    return n + sum(n - 1);
}

int main() {
    int n;

    // Input: Get the value of n from the user
    cin >> n;

    // Output: Display the sum of integers from 1 to n using the sum function
    cout << sum(n);

    return 0;
}
