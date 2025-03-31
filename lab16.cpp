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
    // Test case: Find the GCF of 888 and 54
    cout << gcf(888, 54) << endl;  // Expected output: 6
    return 0;
}
