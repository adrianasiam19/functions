#include <iostream>
using namespace std;
// Function to find the sum of the first n natural numbers
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}


int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers: " << sumOfNaturalNumbers(n) << endl;


}
