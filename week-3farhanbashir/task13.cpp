#include <iostream>
using namespace std;

int main() {

    double priceWheat, priceRice, priceSugar;
    int quantityWheat, quantityRice, quantitySugar;

    cout << "Enter the price of Wheat: ";
    cin >> priceWheat;
    cout << "Enter the quantity of Wheat: ";
    cin >> quantityWheat;

    cout << "Enter the price of Rice: ";
    cin >> priceRice;
    cout << "Enter the quantity of Rice: ";
    cin >> quantityRice;

    cout << "Enter the price of Sugar: ";
    cin >> priceSugar;
    cout << "Enter the quantity of Sugar: ";
    cin >> quantitySugar;

    double totalWheat = priceWheat * quantityWheat;
    double totalRice = priceRice * quantityRice;
    double totalSugar = priceSugar * quantitySugar;

    double overallTotal = totalWheat + totalRice + totalSugar;

    cout << "\t Total value of Wheat: $" << totalWheat << endl;
    cout << "\t Total value of Rice: $" << totalRice << endl;
    cout << "\t Total value of Sugar: $" << totalSugar << endl;
    cout << "\t Overall total value: $" << overallTotal << endl;


}