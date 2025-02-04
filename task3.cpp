#include <iostream>
using namespace std;

int main() {

    int minutes, hours, number;
    cout << "Enter the number:";
    cin >> number;
    hours = number / 60;
    cout << "Hours is  " << hours;
    minutes = number % 60;
    cout << "\t Minutes is  " << minutes << endl;


   /* int minutes, hours, number;
    cout << "Enter the hours:";
    cin >> hours;
    cout << "Enter the minutes:";
    cin >> minutes;
    number = (hours * 60) + minutes;
    cout << "\t Minutes is  " << number << endl;*/



 /*   int num = 2;

    cout << "\t2 * 1 = " << num * 1<<endl;
    cout << "\t2 * 2 = " << num * 2 << endl;
    cout << "\t2 * 3 = " << num * 3 << endl;
    cout << "\t2 * 4 = " << num * 4 << endl;
    cout << "\t2 * 5 = " << num * 5 << endl;
    cout << "\t2 * 6 = " << num * 6 << endl;
    cout << "\t2 * 7 = " << num * 7 << endl;
    cout << "\t2 * 8 = " << num * 8 << endl;
    cout << "\t2 * 9 = " << num * 9 << endl;
    cout << "\t2 * 10 = " << num * 10 << endl;*/


}

  /*  float weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 1.5) {
        cout << "You are underweight." << endl;
    }
    else if (bmi >= 1.5 && bmi < 1.9) {
        cout << "You have a normal weight." << endl;
    }
    else if (bmi >= 2.1 && bmi < 2.9) {
        cout << "You are overweight." << endl;
    }
    else if (bmi >= 3.0) {
        cout << "You have obesity." << endl;
    }

    return 0;
}*/



//#include <iostream>
//using namespace std;
//int main()
//{
//	int num1, num2, num3;
//	cin >> num1;
//	cin >> num2;
//	cin >> num3;
//	int largest;
//	int slarge;
//	if ((num1 > num2) && (num1 > num3))
//	{
//		largest = num1;
//		if (num2 > num3)
//		{
//			slarge = num2;
//		}
//		else
//		{
//			slarge = num3;
//		}
//	}
//	else if ((num2 > num3) && (num2 > num1))
//	{
//		largest = num2;
//		if (num1 > num3)
//		{
//			slarge = num1;
//		}
//		else
//		{
//			slarge = num3;
//		}
//	}
//	else
//	{
//		largest = num3;
//		if (num1 > num2)
//		{
//			slarge = num1;
//		}
//		else
//		{
//			slarge = num2;
//		}
//	}
//	cout << slarge;
//	return 0;
//}