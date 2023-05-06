#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n) {
    const double pi = 3.14159265358979323846;
    const double e = 2.71828182845904523536;
    return sqrt(2 * pi * n) * pow(n / e, n);
}

int main() {
    int n = 1000; // Compute the factorial of 1000

    double result = factorial(n);

    cout << "Factorial of " << n << " is:  " << result << endl;
    return 0;
}