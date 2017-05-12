#include <stdlib.h>
#include <iostream>

// factorial ... Using recursive method of generating a factorial.
unsigned int factorial(unsigned int n) {
	//N * N - 1
	if (n != 1) {
		n *= factorial(n-1);
	} else {
		return 1; 
	}

	return n;
}

// printFactorial ... Output to std the factorial of n digits.
void printFactorial(unsigned int n) {
	//For loop for printing and doing the factorial stuff.
	for (int i = 1; i <= n; i++) {
		std::cout << factorial(i) << std::endl;
	}
}

int main(int argc, char *argv[]) {
	//Number for how many numbers to return.
	unsigned int n;
	//Check / get input.
	if (argc != 2 || atoi(argv[1]) < 1) {
		std::cout << "Usage incorrect. Expects 1 unsigned int and outputs factorial from 1...unsigned int N, N must be greater than or equal to 1." << std::endl;
		exit(EXIT_FAILURE);
	}

	//Set the correct value to n.	
	n = atoi(argv[1]);

	//Output the factorial.
	printFactorial(n);
}
