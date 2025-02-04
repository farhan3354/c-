#include<iostream>
using namespace std;

int main() {

    int number1, sum = 0;

    cout << "Enter an integer: ";
    cin >> number1;
    while (number1> 0) {
        int digit = number1 % 10; 
        sum += digit;           
        number1 = number1 / 10;     
    }

    cout << "Sum of digits: " << sum << endl;



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




    int a, ma = 0, mi = 999;
    cout << "enter the number ";
    for (int i = 0; i <= 10; i++) {
        cin >> a;
        if (a > ma) {
            ma = a;
        }
        if (a < mi) {
            mi = a;
        }
        cout << "the small and the large number " << ma << " " << mi;
    }


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