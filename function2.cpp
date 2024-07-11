#include <iostream>

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Sum of first " << n << " natural numbers: " << sumOfNaturalNumbers(n) << std::endl;
    return 0;
}
