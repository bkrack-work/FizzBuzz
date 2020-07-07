#include <string>
#include "FizzBuzz.h"

std::string fizzbuzz(int input) {
	std::string output = "";

	if (input % 3 == 0) {
		output += "Fizz";
	}
	if (input % 5 == 0) {
		output += "Buzz";
	}
	if (input % 7 == 0) {
		output += "Bang";
	}
	if (output == "") {
		output += std::to_string(input);
	}
	return output;
}
