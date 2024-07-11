#include <iostream>

using namespace std;

// Function to generate the Fibonacci sequence up to a given number
void fibonacciSequence(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci sequence up to " << n << ": ";
    while (a <= n) {
    cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << endl;

 int fibLimit;
    cout << "Enter a limit for Fibonacci sequence: ";
    cin >> fibLimit;
    fibonacciSequence(fibLimit);


    }
