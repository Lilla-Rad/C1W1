#include <iostream> // string is not needed for this excercise set
using namespace std;

void simpleArith(int num1, int num2) {
	int product = num1 * num2;
	cout << product << endl; // calculate product and then print
}
// void due to not returning any values

int main() {
  simpleArith(3, 5);
  return 0;
}
