// Code to implement the gcf function goes here
#include <iostream>
using namespace std;

// Function prototype
int gcf(int a, int b);

// Function to calculate the GCF using Euclidean Algorithm
int gcf(int a, int b) {
    // Base case: if b is 0, then the GCF is a
    if (b == 0) {
        return a;
    }
    // Recursive call: calculate GCF of b and a % b
    return gcf(b, a % b);
}

int main() {
    int a, b;

    // Prompt user for input
    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;

    // Calculate and print the GCF
    cout << "The greatest common factor of " << a << " and " << b << " is " << gcf(a, b) << endl;

    return 0;
}
