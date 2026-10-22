// Caleb Miller 10/22/2026 P-9.cpp

#include <iostream>
using namespace std;

int countCharacter(string str);

int main() {
	int hi = countCharacter("Hi");
	cout << hi << endl;

}

int countCharacter(string str) {
	int count = str.length();
	return count;
}
