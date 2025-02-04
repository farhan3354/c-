#include<iostream>
using namespace std;

int main() {

	float marks;
	int ceiled_marks;
	float GPA;
	cout << " Enter your Marks Obtained in ITC-LAB :";
	cin >> marks;
	ceiled_marks = marks;
	if (ceiled_marks != marks) {
		ceiled_marks = ceiled_marks + 1;
	}
	else
	{
		ceiled_marks = marks;
	}
	marks = ceiled_marks;

	if (marks >= 86) {
		cout << "Your Grade is A";
		GPA = 4.0;
	}
	else if (marks <= 85 && marks >= 82) {
		cout << "Your Grade is A-";
		GPA = 3.67;
	}
	else if (marks <= 81 && marks >= 78) {
		cout << "Your Grade is B+";
		GPA = 3.40;
	}
	else if (marks <= 77 && marks >= 73) {
		cout << "Your Grade is B";
		GPA = 3.0;
	}
	else if (marks <= 72 && marks >= 68) {
		cout << "Your Grade is B-";
		GPA = 2.78;
	}
	
}
}