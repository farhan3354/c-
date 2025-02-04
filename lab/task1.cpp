#include <iostream>

using namespace std;

int main() {
    char n[10];
    cout << "enter a number: ";
    cin >> n;

    int len = 0;
    while (n[len] != '\0') len++;

    int palcount = 0;

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            char temp = n[i];
            n[i] = n[j];
            n[j] = temp;

            cout << n << " ";

            bool ispalindrome = true;
            for (int k = 0, m = len - 1; k < m; k++, m--) {
                if (n[k] != n[m]) {
                    ispalindrome = false;
                    break;
                }
            }
            if (ispalindrome) {
                palcount++;
            }

            temp = n[i];
            n[i] = n[j];
            n[j] = temp;
        }
    }

    cout << "\nnumber of palindrome permutations: " << palcount << endl;

}