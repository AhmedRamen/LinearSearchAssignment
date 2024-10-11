#include <iostream>
#include "Header.h"

int main() {
	SearchArray(arrar, 420);
}

int SearchArray(int arr[], int key) {
	//Length of the array
	int length = *(&arr + 1) - arr;
	std::cout << "Searching for " << key << "..." << std::endl;

	//Iterate through each element in the array
	for (int i = 0; i < length; i++) {
		//Matching key (Could've been more compact but we need to print the user that the item exists
		if (key == arr[i]) {
			std::cout << "Matching found! Element " << i << ": " << arr[i] << std::endl;
			return arr[i];
		}
	}
	std::cout << "None of them matches your query." << std::endl;
	return -1;
}