// Caleb Miller 10/22/2026 P-9.cpp

#include <iostream>
#include <string>
using namespace std;

int countVowels(string str);

int main() {
	
	return 0;
}

int countVowels(string str) {
	int vowelCount = 0;
	for (int count = 0; count < str.length(); count++) {
		if (str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || str[count] == 'o' || str[count] == 'u') {
			vowelCount++;
		}
		if (str[count] == 'A' || str[count] == 'E' || str[count] == 'I' || str[count] == 'O' || str[count] == 'U') {
			vowelCount++;
		}
	}
	return vowelCount;
}