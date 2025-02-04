#include <iostream>
using namespace std;

int main() {


    int  classA =15, classB=12, classC=9;
    int classa,classb,classc,res;

    cout << "\tEnter the seat of A class : ";
    cin >> classa;
    cout << "\tEnter the seat of B class : ";
    cin >> classb;
    cout << "\tEnter the seat of C class : ";
    cin >> classc;
    res = (classa * classA) + (classb * classB) + (classc * classC);
    cout << "\n\tTotal income generated is  " << res << endl;

   

}