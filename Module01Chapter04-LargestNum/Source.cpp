#include <iostream>

void main() {
	int myData[10] = {0, 12, 9, 70, 5, 5, 90, 6, 42, 105};

	//Find largest value
	int largest = -1;
	int numElements = sizeof(myData) / sizeof(int);
	for (int i = 0; i < numElements; i++) {
		if (myData[i] > largest) {
			largest = myData[i];
		}
	}
	std::cout << "Largest value is " << largest << "\n";
}