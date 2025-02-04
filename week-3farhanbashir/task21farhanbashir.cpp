#include <iostream>
using namespace std;

int main() {

	int basic = 500;
	int profess = 1000;
	int advanced = 2000;
	int basic_copy, profess_copy, advanced_copy, res, total , re;

	cout <<"\t" "\t" "Enter basic course:";
	cin >> basic_copy;
	cout << "\t" "\t" "Enter profess :";
	cin >> profess_copy;
	cout << "\t" "\t" "Enter advanced :";
	cin >> advanced_copy;
	

		
	res = basic_copy * basic + profess_copy * profess + advanced_copy * advanced ;

	cout << "\t" "\t" "Total bill without discount is" << res << endl;

	total = 15 * res / 100;


	cout << "\t" "\t" "Total is that" << total << endl;

	re = res - total;
	cout << "\t" "\t" "Total is that" << re << endl;


}