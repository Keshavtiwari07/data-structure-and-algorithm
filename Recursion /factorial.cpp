#include <iostream>
using namespace std;

// Recursive function to calculate the factorial of a number 'n'
int fact(int n) {
    // Base case: if n is 0 factorial is 1 .
    if (n == 0)
        return 1;

    // Recursive case: return the product of n and the factorial of (n-1)
    return n * fact(n - 1);
}

int main() {
    int n;

    // Input: Get the value of n from the user
    cin >> n;

    // Output: Display the factorial of n using the fact function
    cout << fact(n);

    return 0;
}
