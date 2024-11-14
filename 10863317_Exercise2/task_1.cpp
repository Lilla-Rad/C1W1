#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	if (num % 2 == 0) { // check if halving leaves a remainder 
		cout << "The number " << num << " is even." << endl;
	}
	else {
		cout << "The number " << num << " is odd." << endl;
	}
  return 0;
}
