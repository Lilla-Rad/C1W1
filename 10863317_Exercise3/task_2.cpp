#include <iostream>
using namespace std;

void staticLocalVarDemo() {
	static int numberOfcalls = 0;
	numberOfcalls++;
	printf("Number of function calls: %d\n", numberOfcalls);
}

int main() {
	staticLocalVarDemo();
	staticLocalVarDemo();
	staticLocalVarDemo();
}
