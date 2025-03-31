#include <iostream>
using namespace std;

// Recursive function to calculate the GCF using the Euclidean algorithm
int gcf(int a, int b)
{
    // Base case: If b is 0, the GCF is a
    if (b == 0)
        return a;

    // Recursive case: Call gcf with b and a % b
    return gcf(b, a % b);
}

// Main function to run the program
int main()
{
    int a, b;

    cout << "Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;
    cout << "The greatest common factor of " << a  <<" and " << b << " is " << gcf(a,b) << endl;

    return 0;
}
