#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::to_string;
using std::cin;
using std::stod;

void add(const string& num1, const string& num2) {
	try {
		string result = to_string(stod(num1) + stod(num2));
		cout << result;
	}
	catch (std::invalid_argument& err) {
		cout << "You did not enter correct number(s)!";
	}
}

void subtract(const string& num1, const string& num2) {
	try {
		string result = to_string(stod(num1) - stod(num2));
		cout << result;
	}
	catch (std::invalid_argument& err) {
		cout << "You did not enter correct number(s)!";
	}
}

void multiply (const string& num1, const string& num2) {
	try {
		string result = to_string(stod(num1) * stod(num2));
		cout << result;
	}
	catch (std::invalid_argument& err) {
		cout << "You did not enter correct number(s)!";
	}
}

void divide(const string& num1, const string& num2) {
	try {
		string result = to_string(stod(num1) / stod(num2));
		cout << result;
	}
	catch (std::invalid_argument& err) {
		cout << "You did not enter correct number(s)!";
	}
}

int main() {
	string inputfrom;
	string num1;
	string num2;
	cout << "Do you wish to do:\nadd\nsubtract\nmultiply\ndivide\n";
	getline(cin, inputfrom);
	cout << "Please enter number one.\n";
	cin >> num1;
	cout << "Please enter number two.\n";
	cin >> num2;
	if (inputfrom == "add") {
		add(num1, num2);
	}
	else if (inputfrom == "subtract") {
		subtract(num1, num2);
	}
	else if (inputfrom == "multiply") {
		multiply(num1, num2);
	}
	else if (inputfrom == "divide") {
		divide(num1, num2);
	}
	else {
		std::cout << "You have not entered a valid operation!";
		main();
	}
}