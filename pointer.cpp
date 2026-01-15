#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

//int main() {
//	int var = 10;
//	int* ip;
//	ip = &var;
//	std::cout << "value of var: " << var << std::endl;
//	std::cout << "address of var: " << ip << std::endl;
//	std::cout << "value of address: " << *ip << std::endl;
//}
// 
//int main() {
//	int array[]={10,20,30,40,50};
//	int* ptr = array;
//	std::cout << "printing the elements of the array using pointer:" << *ptr << std::endl;
//	*ptr++;
//	std::cout << "printing the elements of the array using pointer:" << *ptr << std::endl;
//	return 0;
//}

//const int MAX = 3;
//
//int main()
//{
//    int  var[MAX] = { 10, 100, 200 };
//    int* ptr[MAX];
//    
//    for (int i = 0; i < MAX; i++)
//    {
//        ptr[i] = &var[i];
//        std::cout << "var[" << i << "]的内存地址为 " << ptr[i] << std::endl;
//        std::cout << "var[" << i << "] 的值为 " << *ptr[i] << std::endl;
//        
//        
//    }
//    return 0;
//}
//#include<ctime>
//void getSecond(unsigned long* ptr);
//int main() {
//	unsigned long sec;
//	getSecond(&sec);
//	std::cout<<"The current time is: "<<sec<<std::endl;
//}
//void getSecond(unsigned long* ptr) {
//	*ptr = time(NULL);
//	return;
//}
double getAverage(int* ptr, int size);
int main() {
	int balance[5]={1000,2000,3000,4000,5000};
	double avg;
	avg=getAverage(balance,5);
	std::cout<<"The average balance is: "<<avg<<std::endl;
	return 0;
}
double getAverage(int* ptr, int size) {
	int i ,sum = 0;
	double avg;
	for (i = 0; i < size; i++) {
		sum += ptr[i];
	}
	avg=(double)sum / size;
	return avg;
}