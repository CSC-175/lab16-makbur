#include <iostream>
using namespace std;

// Recursive function to find GCF (Greatest Common Factor) using Euclidean algorithm
int gcf(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b is zero, return a
    }
    return gcf(b, a % b); // Recursively call with b and a % b
}

int main() {
    // Input two integer values
    int a, b;
    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;

    // Output the result
    cout << "The greatest common factor of " << a  <<" and " << b << " is " << gcf(a,b) << endl;
    return 0;
}
