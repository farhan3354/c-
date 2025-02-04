#include <iostream>
using namespace std;

int main() {



    // Initialize an array of size 10
    int we[10] = { 12, 15, 8, 23, 42, 11, 18, 29, 4, 6 };

    // Print all even numbers in the array
    cout << "Even numbers in the array: ";
    for (int k = 0; k < 10; ++k) {
        if (we[k] % 2 == 0) { // Check if the number is even
            cout << we[k] << " ";
        }
    }
    cout << endl;



    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Print the array in reverse order
    cout << "Array in reverse order: ";
    for (int i = 9; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;



    // a) Initialize an array of 7 entries for students’ roll numbers.
    int rollNumbers[7] = { 10, 20, 30, 40, 50, 60, 70 };

    // b) Output the last roll number
    cout << "Last roll number: " << rollNumbers[6] << endl;

    // c) Set the value of 5th roll number to 40
    rollNumbers[4] = 40;
    cout << "Updated 5th roll number: " << rollNumbers[4] << endl;

    // d) Set the value of 3rd roll number to the addition of first two roll numbers and subtract 2 out of it.
    rollNumbers[2] = rollNumbers[0] + rollNumbers[1] - 2;
    cout << "Updated 3rd roll number: " << rollNumbers[2] << endl;

    // Display the updated array
    cout << "Updated roll numbers: ";
    for (int i = 0; i < 7; ++i) {
        cout << rollNumbers[i] << " ";
    }
    cout << endl;



    int sad, ds;

    // Ask the user for the dimensions of the parallelogram
    cout << "Enter the height of the parallelogram: ";
    cin >> sad;
    cout << "Enter the width of the parallelogram: ";
    cin >> ds;

    // Loop through each row
    for (int i = 0; i < sad; ++i) {
        // Print leading spaces to create the slanted effect
        for (int j = 0; j < sad - i - 1; ++j) {
            cout << " ";
        }

        // Print the width of the parallelogram
        for (int j = 0; j < ds; ++j) {
            cout << "*";
        }

        cout << endl;
    }



    int in;
    // Ask the user for the height of the triangle
    cout << "Enter the height of the filled triangle: ";
    cin >> in;

    // Loop through each row
    for (int i = 1; i <= in; i++) {
        for (int j = 1; j <= 2 * in - 1; j++) {
            // Condition to print '*' within the bounds of the triangle
            if (j >= in - (i - 1) && j <= in + (i - 1)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }





    int height;

    // Ask the user for the height of the triangle
    cout << "Enter the height of the hollow triangle: ";
    cin >> height;

    // Loop through each row
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= 2 * height - 1; j++) {
            // Condition to print '*' at the boundary or the last row
            if (j == height - (i - 1) || j == height + (i - 1) || i == height) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }



    int num1[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int num2[10];
    int j = 9;
    for (int i = 0; i < 10; i++)
    {
        num2[i] = num1[j];
        j--;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << num2[i];
    }


    int num, digit, sum=0;
    cout << "Enter the number";
    cin >> num;
    while (num > 0) {

        digit = num % 10;
        sum += digit;
        num /= 10;
    };
    cout << "Final" << sum;

    float balance = 10000.0;
    int option;
    float deposit, withdraw;

    do {
        cout << "\nATM Menu: \n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. Exit\n";
        cout << "Select an option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "\nYour current balance is: Rs. " << balance << endl;
            break;

        case 2:
            cout << "\nEnter the amount to deposit: Rs. ";
            cin >> deposit;
            if (deposit > 0) {
                balance += deposit;
                cout << "You have successfully deposited Rs. " << deposit << endl;
            }
            else {
                cout << "Invalid deposit amount!" << endl;
            }
            break;

        case 3:
            cout << "\nEnter the amount to withdraw: Rs. ";
            cin >> withdraw;
            if (withdraw > 0 && withdraw <= balance) {
                balance -= withdraw;
                cout << "You have successfully withdrawn Rs. " << withdraw << endl;
            }
            else if (withdraw > balance) {
                cout << "Insufficient funds. You cannot withdraw more than your current balance." << endl;
            }
            else {
                cout << "Invalid withdrawal amount!" << endl;
            }
            break;

        case 4:
            cout << "\nExiting the system. Thank you for using the ATM!" << endl;
            break;

        default:
            cout << "\nInvalid option! Please select a valid menu option." << endl;
            break;
        }

    } while (option != 4);









    char name;
    int totalTasks, tasksCompleted;
    float customerSatisfaction;
    int bonus = 5; 

    cout << "Enter the first character of employee's  name: ";
    cin>>name;

    cout << "Enter the total tasks assigned to " << name << ": ";
    cin >> totalTasks;

    cout << "Enter the number of tasks completed by " << name << ": ";
    cin >> tasksCompleted;

    cout << "Enter the customer satisfaction rating (out of 5) for " << name << ": ";
    cin >> customerSatisfaction;

    float  CompletionRate = (tasksCompleted / totalTasks) * 100;

        if (CompletionRate == 100) {

            if (customerSatisfaction == 4.5 || customerSatisfaction < 4.5) {
                bonus++; 
                cout << "award a performance bonus of ++bonus of "<<bonus;
            }
            else {
                cout << "Customer satisfaction is average. Bonus remains the same." << endl;
            }

        }
        else if (CompletionRate >= 80 && CompletionRate < 100) {
         
            if (customerSatisfaction >= 4.0) {
                bonus++;  
                cout << "Customer satisfaction is good. Bonus slightly increased." << endl;
            }
            else {
                bonus--;
                cout << "Customer satisfaction is low. Bonus decreased by 1." << endl;
            }
        }
        else {
            bonus -= 2; 
            cout << "Completion rate is low. Bonus decreased by 2." << endl;
        }

        cout << "\nFinal Performance Bonus for " << name << ": " << bonus << endl;
















    //float subject1, subject2, subject3;
    //float total, percentage;
    //char grade;

    //cout << "Enter the score for Subject 1 (out of 100): ";
    //cin >> subject1;
    //cout << "Enter the score for Subject 2 (out of 100): ";
    //cin >> subject2;
    //cout << "Enter the score for Subject 3 (out of 100): ";
    //cin >> subject3;

    //total = subject1 + subject2 + subject3;
    //percentage = (total / 300) * 100;

    //if (percentage >= 90) {
    //    grade = 'A'; 
    //    cout << "Grade: A+" << endl;
    //}
    //else if (percentage >= 80 && percentage < 90) {
    //    grade = 'A';
    //    cout << "Grade: A" << endl;
    //}
    //else if (percentage >= 70 && percentage < 80) {
    //    grade = 'B';
    //    cout << "Grade: B" << endl;
    //}
    //else if (percentage >= 60 && percentage < 70) {
    //    grade = 'C';
    //    cout << "Grade: C" << endl;
    //}
    //else if (percentage <= 60 ) {
    //    grade = 'F';
    //    cout << "Grade: Fail" << endl;
    //}

    //int n;

    //cout << "Enter a number: ";
    //cin >> n;

    //cout << "Prime numbers up to " << n << " are: ";

    //for (int i = 2; i <= n; ++i) {
    //    bool isPrime = true;

    //    for (int j = 2; j * j <= i; ++j) {
    //        if (i % j == 0) {
    //            isPrime = false; // i is divisible by j, so it's not prime
    //            break;
    //        }
    //    }

    //    if (isPrime) {
    //        cout << i << " ";
    //    }
    //}
    //cout << endl;



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