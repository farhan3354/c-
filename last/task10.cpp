#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";

    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false; // i is divisible by j, so it's not prime
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;



    //int number, originalNum, reversedNum = 0, digit;

    //cout << "Enter an integer: ";
    //cin >> number;

    //originalNum = number;

    //while (number > 0) {
    //    digit = number % 10;       
    //    reversedNum = reversedNum * 10 + digit; 
    //    number = number / 10;          
    //}

    //if (originalNum == reversedNum) {
    //    cout << originalNum << " is a palindrome." << endl;
    //}
    //else {
    //    cout << originalNum << " is not a palindrome." << endl;
    //}

    /*int number, originalNumber, remainder, result = 0;

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
    }*/

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