#include <iostream>
#include <vector>
#include <ctime>


#include "Copy.h"
#include "MySwap.h"

const int MAX_SIZE = 50000000;

template <typename T>
void foo(T &&arg) {
    T a(std::move(arg));
	std::cout << arg;
}

int main() {
	/*CopyClass vec1(MAX_SIZE);
	CopyClass vec2(MAX_SIZE);

	unsigned int start_swap_time = clock();
	MovingSwap(vec1, vec2);
	unsigned int end_swap_time = clock(); 
	std::cout << end_swap_time - start_swap_time << '\n'; 

	unsigned int start_movingswap_time = clock();
	MySwap(vec1, vec2);
	unsigned int end_movingswap_time = clock(); 
	std::cout << end_movingswap_time - start_movingswap_time;*/

	MyInt a;
	//int a = 5;
	foo(MyInt());
}