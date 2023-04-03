#include <iostream>
#include <algorithm>
//Task 1
void three_max(int& F, int& G, int& X) {
	int max = F;
	max = F > G ? F : G;
	max = max > X ? max : X;
	F = G = X = max;
	std::cout << F << ' ' << G << ' ' << X;
}
//Task 2
int& nega_el(int arr[], const int length) {	
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			return arr[i];	
	return arr[0];
}
void rf(int* mass1, int* mass2, const int length1, const int length2) {
	std::cout << '[';
	for (int i = 0; i < length1; i++)
		std::cout << *(mass1 + i) << ", ";
		std::cout << "\b\b]\n" << std::endl;

	std::cout << '[';
	for (int j = 0; j < length2; j++)
		std::cout << *(mass2 + j) << ", ";
		std::cout << "\b\b]\n" << std::endl;
}
void rk(int* mass1, int* mass2, const int length1, const int length2) {
	for (int i = 0; i < length1; i++)
		for (int j = 0; j < length2; j++)
			if (*(mass1 + i) == *(mass2 + j))
				*(mass2 + j) = 0;
	std::cout << '[';
	for (int j = 0; j < length2; j++)		
	  std::cout << *(mass2 + j) << ", ";
	  std::cout << "\b\b]\n" << std::endl;	
}


int main() {
	//Task 1
	int A = 3, B = 5, C = 4;
	three_max(A, B, C);

	//Task 2
	int const size = 5;
	int array[size]{ 222, 5, -10, 8, 20 };
	std::cout << '\n' << nega_el(array, size) << std::endl;

	int const size1 = 7;
	int const size2 = 6;
	int array1[size1]{ 3, 6, 4, 1, 4, 8, 2 };
	int array2[size2]{5, 3, 1, 5, 10, 8};
	rf(array1, array2, size1, size2);
	rk(array1, array2, size1, size2);	
	return 0;
}