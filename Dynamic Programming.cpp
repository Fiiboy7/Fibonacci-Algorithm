#include <iostream>
using namespace std;

int fibonacciDP(int n) {
    if (n <= 1) {
        return n;
    }
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci number is: " << fibonacciDP(n) << endl;
    return 0;
}
