// lab16.cpp

// Recursive function to calculate the GCF using the Euclidean algorithm
int gcf(int a, int b)
{
    // Base case: If b is 0, the GCF is a
    if (b == 0)
        return a;

    // Recursive case: Call gcf with b and a % b
    return gcf(b, a % b);
}
