#include <iostream>
using namespace std;

int main() {

    int number, originalNumber, remainder, result = 0;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;          
        result += remainder * remainder * remainder; 
        number /= 10;             
    }

    if (result == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    }
    else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

 /*   int num1, num2, lcm;

    cout << "Enter the first positive integer: ";
    cin >> num1;
    cout << "Enter the second positive integer: ";
    cin >> num2;

    int maxVal = (num1 > num2) ? num1 : num2;

    for (int i = maxVal; ; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }
    cout << "The Least Common Multiple (LCM) of " << num1 << " and " << num2 << " is: " << lcm << endl;*/


}