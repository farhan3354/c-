#include <iostream>
using namespace std;

int main() {
    //cout << "\t\t      ." << "\t\t\t      ." << endl;
    //cout << "\t\t      .." << "\t\t     .." << endl;
    //cout << "\t\t      ...." << "\t\t    ..." << endl;
    //cout << "\t\t      ....." << "\t\t   ...." << endl;
    //cout << "\t\t      ......" << "\t\t  ....." << endl;
    //cout << "\t\t      ......." << "\t\t ......" << endl;

    //cout << "\n\n\t\t      ......." << "\t\t ......." << endl;
    //cout << "\t\t      ......" << "\t\t  ......" << endl;
    //cout << "\t\t      ....." << "\t\t   ....." << endl;
    //cout << "\t\t      ...." << "\t\t    ...." << endl;
    //cout << "\t\t      .." << "\t\t      .." << endl;
    //cout << "\t\t      ." << "\t\t\t       ." << endl;

    int chem, math, phy,result;
    cout << "Enter the marks of chemistry : ";
    cin >> chem;
    cout << "Enter the marks of math : ";
    cin >> math;
    cout << "Enter the marks of phy : ";
    cin >> phy;
    result = chem + phy + math;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "   Math         Physics      Chemistry       Total is"<< endl;
    cout <<"\t"<<math <<"\t   " <<phy <<"\t  \t " << chem <<"\t    \t" << result << endl;
    cout << "-----------------------------------------------------------------------" << endl;

}