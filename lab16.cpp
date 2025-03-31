#include <iostream>
using namespace std;

int gcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcf(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two integers to find the GCF: ";
    cin >> a >> b;
    cout << "GCF: " << gcf(a, b) << endl;
    return 0;
}
