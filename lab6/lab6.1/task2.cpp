#include <iostream>
using namespace std;

int main() {

   /* int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Positive divisors of " << number << " are: ";
    int count = 0;

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Total number of divisors: " << count << endl;




    int num, revnum = 0;

    cin >> num;
    while (num > 0) {

        revnum = revnum * 10 + num % 10;
        num = num / 10;

    }
    cout << revnum<<endl;



    for (int i = 1; i <= 100; i++) {

        cout << i++<<endl;

    }*/

    for (int i = 0; i <= 100; i++) {

        cout << i++<<endl;

    }





    int val;
    char conver;
    cout << "Enter the conversation type ";
    cin >> conver;
    cout << "Enter the number";
    cin >> val;
    
    if (conver == 'i' || conver == 'I') {
        cout << "Convert it into the centimeter "<<val* 2.54;
    }
    else if (conver == 'C' || conver == 'c') {
        cout << "Convert it into the inches "<<val* 0.393701;
    }
    else if (conver == 'm' || conver == 'M') {
        cout << "Convert it into Kilometer "<<val* 1.60934;
    }
    else if (conver == 'l' || conver == 'L') {
        cout << "Convert it into Gallons " << val * 0.264172;
    }
    else if (conver == 'p' || conver == 'P') {
        cout << "Convert it into Kilogram " << val *0.453592;
    }
    else if (conver == 'g' || conver == 'G') {
        cout << "Convert it into liter " << val * 3.78541;
    }
    else if (conver == 'k' || conver == 'K') {
        cout << "Convert it into liter " << val * 0.621371;
    }
    else if (conver == 'f' || conver == 'F') {
        cout << "Convert it into celcius " << val - 32 * (5 / 9);
    }
    else if (conver == 'c' || conver == 'C') {
        cout << "Convert it into celcius " << val * (9 / 5) + 32;
    }
    else {
        cout << "Number";
    }



  /*  int sum;
    int total = 0;;
    int product;
    int base;
    int exponent;
    cin >> base;
    cin >> exponent;
    while (exponent >= 1)
    {
        product = 1;
        for (int i = 0; i < exponent; i++)
        {
            product = product * base;
        }
        sum = (exponent + 1) * product;
        total = total + sum;
        exponent--;
    }
    total++;
    cout << total;
    return 0;*/
}


//    int i;
//	do {
//    		cout << "Enter the number";
//        	cin >> i;
//            if (i < 10) {
//        	cout << "Invalid number /or numer less than 10";
//		}
//    		else
//        	{
//				cout << "Valid input or number greadter then 10";
//    		}
//
//	} while (i < 10);
//
//}


     /* int num1,sum =0;

       do {
           cout << "Enter number";
            cin >> num1;
           if (num1 > 0) {
                sum = sum + num1;
                cout << "Number is positive " << num1 << endl;
                cout << "The sum of numbers is  " << sum << endl;


 }
            else {
                cout << "Number is neg " << num1 << endl;
                cout << "The sum of numbers is  " << sum << endl;

            }
       } while (num1 > -1);
    }*/

   /* int num;
    cin >> num;


    for (int i = num; i > 0; i--) {

        cout << i << endl;

    }

    int start;
    cout << "Enter a number to start the countdown: ";
    cin >> start;


    do {
        cout << start << endl;
        start--;
    } while (start >= 0);

    cout << "Countdown finished!" << endl;

}*/

    //int number;
    //int evenCount = 0, oddCount = 0;

    //cout << "Enter integers (enter 0 to stop):" << endl;

    //while (true) {
    //    cin >> number;

    //    if (number == 0) {
    //        break; 
    //    }

    //    if (number % 2 == 0) {
    //        evenCount++;
    //    }
    //    else {
    //        oddCount++;
    //    }
    //}

    //cout << "\nTotal even numbers: " << evenCount << endl;
    //cout << "Total odd numbers: " << oddCount << endl;


//}

   /* int startCelsius, endCelsius, increment;

    cout << "Enter starting Celsius temperature: ";
    cin >> startCelsius;
    cout << "Enter ending Celsius temperature: ";
    cin >> endCelsius;
    cout << "Enter increment: ";
    cin >> increment;

    cout << "Celsius | Fahrenheit\n";
    cout << "-------------------------\n";

    for (int celsius = startCelsius; celsius <= endCelsius; celsius += increment) {
        int fahrenheit = ((celsius * 9) / 5) + 32;
        cout << celsius << " | " << fahrenheit << endl;
    }*/



  /*  int n;
    double sum = 0, average;
    int countAboveAverage = 0;

    cout << "Enter the number of floating-point numbers: ";
    cin >> n;

    double numbers[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = sum / n;
    cout << "Average: " << average << endl;

    for (int

        i = 0; i < n; i++) {
        if (numbers[i] > average) {
            countAboveAverage++;
        }
    }

    cout << "Count of numbers above average: " << countAboveAverage << endl;*/


    /*int n, sum = 0;

    cout << "Enter an integer n: ";
    cin >> n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum is: " << sum << endl;*/


    /*int n;
    double sum = 0, average;

    cout << "Enter a positive integer n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    average = sum / n;

    cout << "Sum of squares: " << sum << endl;
    cout << "Average of squares: " << average << endl;*/

    /*int number;
    long long factorial = 1;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    cout << "Factorial for number " << number << " is " << factorial << endl;*/

    //int X, Y;

    //cout << "Enter 1st number: ";
    //cin >> X;
    //cout << "Enter 2nd number: ";
    //cin >> Y;

    //if (X > Y) {
    //    int temp = X;
    //    X = Y;
    //    Y = temp;
    //}

    //for (int i = X; i <= Y; i++) {
    //    if (i % 3 == 0 || i % 5 == 0) {
    //        cout << "Number divisible by 3 or 5 is: " << i << endl;
    //    }
    //}


   /* cout << "Num\tSquare\tCube\n";
    for (int i = 1; i <= 20; i++) {
        cout << i << "\t" << i * i << "\t" << i * i * i << endl;
    }*/



  /*  int number;
    int sumEven = 0, sumOdd = 0;

    cout << "Enter the number: ";
    cin >> number;

    cout << "Even Numbers are: ";
    for (int i = 0; i <= number; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sumEven += i;
        }
    }
    cout << "\nSum of even numbers: " << sumEven << endl;

    cout << "Odd Numbers are: ";
    for (int i = 1; i <= number; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sumOdd += i;
        }
    }
    cout << "\nSum of odd numbers: " << sumOdd << endl;

    if (sumEven > sumOdd) {
        cout << "The Even sum is greater than Odd Sum\n";
    }
    else if (sumOdd > sumEven) {
        cout << "The Odd sum is greater than Even Sum\n";
    }
    else {
        cout << "Both sums are equal\n";
    }*/


    /*int X;

    cout << "Enter a number: ";
    cin >> X;

    for (int i = X; i >= 0; --i) {
        cout << i << " ";
    }
    cout << endl;*/



 /*   double temperature, humidity;

    cout << "Enter temperature (°C): ";
    cin >> temperature;
    cout << "Enter humidity (%): ";
    cin >> humidity;

    if (temperature > 30) {
        if (humidity > 70) {
            cout << "Heat Advisory: Stay Hydrated\n";
        }
        else {
            cout << "Hot Weather: Wear Sunscreen\n";
        }
    }
    else if (temperature >= 15 && temperature <= 30) {
        if (humidity > 50) {
            cout << "Pleasant Weather: Enjoy Outdoors\n";
        }
        else {
            cout << "Cool Weather: Wear a Light Jacket\n";
        }
    }
    else {
        cout << "Cold Weather: Stay Warm\n";
    }*/



    //int age;
    //char fitnessLevel;

    //cout << "Enter age: ";
    //cin >> age;
    //cout << "Enter fitness level (B for Beginner, I for Intermediate, A for Advanced): ";
    //cin >> fitnessLevel;

    //if (age < 18) {
    //    if (fitnessLevel == 'B' || fitnessLevel == 'b') {
    //        cout << "Eligible for Youth Program\n";
    //    }
    //    else {
    //        cout << "Not Eligible\n";
    //    }
    //}
    //else if (age >= 18 && age <= 35) {
    //    if (fitnessLevel == 'I' || fitnessLevel == 'i' || fitnessLevel == 'A' || fitnessLevel == 'a') {
    //        cout << "Eligible for Adult Program\n";
    //    }
    //    else {
    //        cout << "Not Eligible\n";
    //    }
    //}
    //else {
    //    if (fitnessLevel == 'A' || fitnessLevel == 'a') {
    //        cout << "Eligible for Senior Program\n";
    //    }
    //    else {
    //        cout << "Not Eligible\n";
    //    }
    //}



 /*   float performanceRating;
    int yearsOfService;

    cout << "Enter performance rating (0-5): ";
    cin >> performanceRating;
    cout << "Enter years of service: ";
    cin >> yearsOfService;

    if (performanceRating >= 3.5 && performanceRating <= 5) {
        if (yearsOfService > 5) {
            cout << "Bonus: 20% of salary\n";
        }
        else {
            cout << "Bonus: 15% of salary\n";
        }
    }
    else if (performanceRating >= 2.2 && performanceRating < 3.5) {
        if (yearsOfService > 3) {
            cout << "Bonus: 10% of salary\n";
        }
        else {
            cout << "Bonus: 5% of salary\n";
        }
    }
    else {
        cout << "No bonus\n";
    }*/


  /*  int creditScore;
    double income;
    char existingLoan;

    cout << "Enter credit score: ";
    cin >> creditScore;
    cout << "Enter income: ";
    cin >> income;
    cout << "Do you have an existing loan (y/n)? ";
    cin >> existingLoan;

    if (existingLoan == 'y' || existingLoan == 'Y') {
        cout << "Considered for a review\n";
    }
    else {
        if (creditScore > 700) {
            if (income > 50000) {
                cout << "Eligible for loan\n";
            }
        }
        else if (creditScore >= 650 && creditScore <= 700) {
            if (income > 40000) {
                cout << "Eligible for loan with higher interest rate\n";
            }
        }
        else {
            cout << "Not eligible for loan\n";
        }*/


//#include <iostream>
//using namespace std;
//
//int main() {
//
//        
//
//  /*  int num;
//    cin >> num;
//    for (int i = 1; i < 10; i++) {
//        cout << num * i<<endl;
//
//    }*/
//    
//
// /*   int sec1, sec2, sec3, sec4, sec5, sec6;
//
//    cout << "Secetion no 1";
//    cin >> sec1;
//    cout << "Secetion no 2";
//    cin >> sec2;
//    cout << "Secetion no 3";
//    cin >> sec3;
//    cout << "Secetion no 4";
//    cin >> sec4;
//    cout << "Secetion no 5";
//    cin >> sec5;
//    cout << "Secetion no 6";
//    cin >> sec6;
//
//    if (sec1 > sec2 && sec1 > sec3 && sec1 > sec4 && sec1 > sec5 && sec1 > sec6) {
//        cout << "This section will won 1 " << sec1;
//    }
//    else if (sec2 > sec1 && sec2 > sec3 && sec2 > sec4 && sec2 > sec5 && sec2 > sec6) {
//        cout << "This section will won 2" << sec2;
//
//    }
//    else if (sec3 > sec1 && sec3 > sec2 && sec3 > sec4 && sec3 > sec5 && sec3 > sec6) {
//        cout << "This section will won 3" << sec3;
//
//    }
//    else if (sec4 > sec1 && sec4 > sec2 && sec4 > sec3 && sec4 > sec5 && sec4 > sec6) {
//        cout << "This section will won 4" << sec4;
//
//    }
//    else if (sec5 > sec1 && sec5 > sec2 && sec5 > sec4 && sec5 > sec3 && sec5 > sec6) {
//        cout << "This section will won 5" << sec5;
//
//    }
//    else
//    {
//        cout << "This section will won 6" << sec6;
//
//    }*/
//
//    /*int minutes, hours, number;
//    cout << "Enter the number:";
//    cin >> number;
//    hours = number / 60;
//    cout << "Hours is  " << hours;
//    minutes = number % 60;
//    cout << "\t Minutes is  " << minutes << endl;*/
//
//
//   /* int minutes, hours, number;
//    cout << "Enter the hours:";
//    cin >> hours;
//    cout << "Enter the minutes:";
//    cin >> minutes;
//    number = (hours * 60) + minutes;
//    cout << "\t Minutes is  " << number << endl;*/
//
//
//
// /*   int num = 2;
//
//    cout << "\t2 * 1 = " << num * 1<<endl;
//    cout << "\t2 * 2 = " << num * 2 << endl;
//    cout << "\t2 * 3 = " << num * 3 << endl;
//    cout << "\t2 * 4 = " << num * 4 << endl;
//    cout << "\t2 * 5 = " << num * 5 << endl;
//    cout << "\t2 * 6 = " << num * 6 << endl;
//    cout << "\t2 * 7 = " << num * 7 << endl;
//    cout << "\t2 * 8 = " << num * 8 << endl;
//    cout << "\t2 * 9 = " << num * 9 << endl;
//    cout << "\t2 * 10 = " << num * 10 << endl;*/
//
//
//}
//
//  /*  float weight, height, bmi;
//
//    cout << "Enter your weight in kilograms: ";
//    cin >> weight;
//
//    cout << "Enter your height in meters: ";
//    cin >> height;
//
//    bmi = weight / (height * height);
//
//    cout << "Your BMI is: " << bmi << endl;
//
//    if (bmi < 1.5) {
//        cout << "You are underweight." << endl;
//    }
//    else if (bmi >= 1.5 && bmi < 1.9) {
//        cout << "You have a normal weight." << endl;
//    }
//    else if (bmi >= 2.1 && bmi < 2.9) {
//        cout << "You are overweight." << endl;
//    }
//    else if (bmi >= 3.0) {
//        cout << "You have obesity." << endl;
//    }
//
//    return 0;
//}*/
//
//
//
////#include <iostream>
////using namespace std;
////int main()
////{
////	int num1, num2, num3;
////	cin >> num1;
////	cin >> num2;
////	cin >> num3;
////	int largest;
////	int slarge;
////	if ((num1 > num2) && (num1 > num3))
////	{
////		largest = num1;
////		if (num2 > num3)
////		{
////			slarge = num2;
////		}
////		else
////		{
////			slarge = num3;
////		}
////	}
////	else if ((num2 > num3) && (num2 > num1))
////	{
////		largest = num2;
////		if (num1 > num3)
////		{
////			slarge = num1;
////		}
////		else
////		{
////			slarge = num3;
////		}
////	}
////	else
////	{
////		largest = num3;
////		if (num1 > num2)
////		{
////			slarge = num1;
////		}
////		else
////		{
////			slarge = num2;
////		}
////	}
////	cout << slarge;
////	return 0;
////}