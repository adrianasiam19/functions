#include <iostream>
using namespace std;

// Function to convert height from centimeters to feet
double heightInFeet(int heightInCm) {
    return heightInCm / 30.48; // 1 foot = 30.48 cm
}
int main() {
  int heightInCm;
    cout << "Enter height in centimeters: ";
    cin >> heightInCm;
    cout << "Height in feet: " << heightInFeet(heightInCm) << endl;
}
