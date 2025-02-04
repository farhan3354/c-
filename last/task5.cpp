#include <iostream>
using namespace std;

int main() {

    int num1, num2, lcm;

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
    cout << "The Least Common Multiple (LCM) of " << num1 << " and " << num2 << " is: " << lcm << endl;


}