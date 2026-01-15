#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<iomanip>
using std::setw;
int main() {
	int n[10];
	for (int i = 0; i < 10; i++) {
		n[i] = i + 100;
	}
	std::cout << "element" << setw(13) << "value" << std::endl;
	for (int j = 0; j < 10; j++) {
		std::cout << setw(7) << j << setw(13) << n[j] << std::endl;
	}
	return 0;
}