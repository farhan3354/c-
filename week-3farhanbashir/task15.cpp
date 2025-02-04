#include <iostream>
using namespace std;

int main() {

    int fuel, rent, bills, total;

    cout << "Enter the value of Fuel : ";
    cin >> fuel;
    cout << "Enter the value of Rent : ";
    cin >> rent;
    cout << "Enter the value of Fuel : ";
    cin >> bills;


    cout << "\tFuel\t\t" << fuel << endl;
    cout << "\tRent\t\t" << rent << endl;
    cout << "\tFuel\t\t" << bills << endl;

    total = fuel + rent + bills;

    cout << "\tTotal is\t" << total;

    


}