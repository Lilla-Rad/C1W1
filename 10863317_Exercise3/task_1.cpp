#include <iostream>
#include <cmath> // string is not needed for this exercise set, but cmath is
using namespace std;

double distCalc(double x, double y) {
	double distance = sqrt(pow(x, 2.0) + pow(y, 2.0)); // square x & y, add them, and then take the root
	return distance; // return value as double
}

int main() {
  cout << distCalc(5, 2) << endl << distCalc(3, 6) << endl; // calculate euclidean distance from origin for two given points; all one line for efficiency
  return 0;
}
