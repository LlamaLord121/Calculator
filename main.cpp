#include <iostream>
#include <string>

using namespace std;

bool exitChecker(string input);
bool inputValidator(string input);
double calculator(string input);

int main(){

	bool status = true;
	do {
		string input;
		double output;
		cout << "Enter Calculation Set (type exit to exit): ";
		getline(cin, input);

		if (!inputValidator(input)) { // Simple Stand In for a Proper Invalid Input Checker. Use inputValidator function.

			cout << "Invalid Input, Try Again" << endl;

		} else if (exitChecker(input)) {

			status = false;
			cout << "Exiting Program" << endl;
		} else {
			output = calculator(input);
			cout << output << " : " << input << endl;
		}

	} while (status == true);

	return 0;
}



bool exitChecker(string input) {
	string inputCopy = input;
	for (char &c : inputCopy) {
		if (c >= 'A' && c <= 'Z') {
			c += 32;
		}
	}

	if (inputCopy.find("exit") != string::npos) {
		return true;
	} else {
		return false;
	}
}

bool inputValidator(string input) {
	// A false return means the input is INVALID, a true return means the input is VALID.
	if (input.empty()) {
		return false;
	} else {
		return true;
	}
}

double calculator(string input) {
	return 1;
}
