#include <iostream>
using namespace std;

int globalOne = 0;
static int globalTwo = 0;
// declare global and static global vars

void globalDemo() { 
	globalOne++;
	globalTwo++;
	cout << "Global var: " << globalOne << endl << "Static global var: " << globalTwo << endl;
}

int main() {
  globalDemo();
	globalDemo(); 
  globalDemo();
  return 0; 
}
