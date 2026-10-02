#include <iostream>

// Lab 6 — Mason Ayala
// CIS 5 Week 06 · Even and odd
int main() {
	int evenSum = 0;
	int oddSum = 0;
	for (int i = 0; i <= 100; i = i + 2)
	{
		evenSum = evenSum + i;
	}
	int j = 1;
	while (j <= 99)
	{
		oddSum = oddSum + j;
		j = j + 2;
	}
	std::cout << "Even sum: " << evenSum << '\n';
	std::cout << "Odd sum: " << oddSum << '\n';
	return 0;
}
