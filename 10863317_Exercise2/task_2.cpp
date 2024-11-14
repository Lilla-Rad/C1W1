#include <iostream>
#include <string>
using namespace std;

int main() {
	int day;
	cout << "Input a number between 1 & 7: ";
	cin >> day;
	cout << "It is "; // no endl so the day can be stated on the same line
	switch (day) {
	case 1:
		cout << "Sunday";
		break;
	case 2:
		cout << "Monday";
		break;
	case 3:
		cout << "Tuesday";
		break;
	case 4: 
		cout << "Wednesday";
		break;
	case 5:
		cout << "Thursday";
		break;
	case 6:
		cout << "Friday";
		break;
	case 7:
		cout << "Saturday";
		break;
	}
	cout << "." << endl; // finish sentence, break line
  return 0; // exit
}
