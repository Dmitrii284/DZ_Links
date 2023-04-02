#include <iostream>
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


int main() {
	//Task 1
	int A = 3, B = 5, C = 4;
	three_max(A, B, C);
	//Task 2
	int const size = 5;
	int array[size]{ 222, 5, -10, 8, 20 };
	std::cout << '\n' << nega_el(array, size)<<std::endl;
	
	return 0;
}