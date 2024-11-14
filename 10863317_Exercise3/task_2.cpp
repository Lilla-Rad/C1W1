#include <iostream>
using namespace std;

int main() {
	static int numberOfcalls = 0;
	numberOfcalls++;
	printf("Number of function calls: %d\n", numberOfcalls);
  return 0;
}
