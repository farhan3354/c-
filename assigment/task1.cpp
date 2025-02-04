#include <iostream>
using namespace std;

int main()
{

    // Data arrays
    char array[20] = { "SUGAR#HONEY#SALT" };

    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == '#')
        {
            cout << endl;
        }
        else
        {
            cout << array[i];
        }
    }
}