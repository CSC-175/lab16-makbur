#include <iostream>
using namespace std;

// Function prototype for the gcf function
int gcf(int a, int b);

int main()
{
    int a, b;

    // Ask the user for two integer values
    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;

    // Output the greatest common factor
    cout << "The greatest common factor of " << a << " and " << b << " is " << gcf(a, b) << endl;

    return 0;
}

// Recursive function to calculate the GCF using the Euclidean algorithm
int gcf(int a, int b)
{
    // Base case: If b is 0, the GCF is a
    if (b == 0)
        return a;

    // Recursive case: Call gcf with b and a % b
    return gcf(b, a % b);
}
