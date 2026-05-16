#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

// How to clean a string, turn it into lowercase, remove spaces and other operations done in this function


std::string removeUnwantedCharacters(const std::string& str) {
	std::string result = str;

	// Remove spaces and punctuation
	result.erase(std::remove_if(result.begin(), result.end(), [](char c) {
		return std::isspace(c) || std::ispunct(c); // Condition to remove
	}), result.end());

	return result;
}

std::string cleanAndLowercase(const std::string& str) {
	std::string result = str;

	// Remove spaces and punctuation
	result.erase(std::remove_if(result.begin(), result.end(), [](char c) {
		return std::isspace(c) || std::ispunct(c);
	}), result.end());

	// Convert the remaining characters to lowercase
	std::transform(result.begin(), result.end(), result.begin(), ::tolower);

	return result;
}

int main() {
	// char ch[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	// cout << "Printing the character array  : ";
	// cout << ch;

	string str = "Bharat Jiwnani , is a.  good! body";

	string result = removeUnwantedCharacters(str);

	cout << endl << "Your Name is : " << result;

	return 0;
}