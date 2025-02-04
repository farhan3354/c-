#include<iostream>
using namespace std;

int main() {

	char dictionary[20];
	cout << "enter random characters upto 20: " << endl;


	cin >> dictionary;


	cout << "enter word to search: ";
	char word[20];
	cin >> word;

	int length = 0;
	while (word[length] != '\0') {
		length++;
	}

	bool found = false;
	int index = 0;

	for (int i = 0; i < length; i++) {
		for (int j = index; j < 20; j++) {
			if (word[i] == dictionary[j]) {

				index = j;


				found = true;
				break;
			}
			else {
				found = false;
			}

		}

		if (!found) {
			found = false;
			break;
		}
	}

	if (found) {
		cout << "word present." << endl;
	}
	else {
		cout << "word not present." << endl;
	}
	return 0;

}