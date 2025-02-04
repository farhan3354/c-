#include<iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    int small = 9;
    int max = 0;

    while (number > 0) {

        int digit = number % 10;
        if (digit < small) {
            small = digit;
        }
        if (digit > max) {
            max = digit;
        }
        number = number / 10;

    }
    cout << "Smallest digit: " << small << ", Largest digit: " << max << endl;






    int num, maxVal = 0, minVal = 9999;
    cout << "Enter 10 numbers: \n";

    for (int i = 0; i < 10; i++) {
        cin >> num;

        if (num > maxVal) {
            maxVal = num;
        }
        if (num < minVal) {
            minVal = num;
        }
    }
    cout << "Maximum value: " << maxVal << ", Minimum value: " << minVal << endl;


}