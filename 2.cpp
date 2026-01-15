#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include<iomanip>
using std::setw;
//int main() {
//	int n[10];
//	for (int i = 0; i < 10; i++) {
//		n[i] = i + 100;
//	}
//	std::cout << "element" << setw(13) << "value" << std::endl;
//	for (int j = 0; j < 10; j++) {
//		std::cout << setw(7) << j << setw(13) << n[j] << std::endl;
//	}
//	return 0;
//}
int main() {
	int a=123, b=4, c=7892, d=987;
	std::cout <<std::left <<setw(4) << a << setw(4) <<c<<std::endl;
	std::cout << setw(3) << c << setw(4) << b<< std::endl;
	std::cout << std::setfill('-') << setw(23)<<"" << std::endl;
	std::cout << std::setfill('*') << setw(23) << "" << std::endl;
}