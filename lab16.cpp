#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Factor (GCF) using recursion
int gcf(int a, int b) {
    if (b == 0) {
        return a;  // Base case: If b is 0, return a
    } else {
        return gcf(b, a % b);  // Recursive case: gcf(b, a % b)
    }
}

int main() {
    int a, b;

    // Prompt user for input
    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;

    // Output the result of the GCF calculation
    cout << "The greatest common factor of " << a << " and " << b << " is " << gcf(a, b) << endl;

    return 0;
}
