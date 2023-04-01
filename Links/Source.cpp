#include <iostream>

void three_max(int& F, int& G, int& X) {
	int max = F;
	max = F > G ? F : G;
	max = max > X ? max : X;
	F = G = X = max;
	std::cout << F << ' ' << G << ' ' << X;
}

int& nega_el(int arr[], const int length) {
	int b = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			return arr[i];
	
		else
			return	arr[0];
	//return arr[b];
}


int main() {
	int A = 3, B = 5, C = 4;
	three_max(A, B, C);


	int const size = 5;
	int array[size]{ 222, 5, -10, 8, 20 };
	std::cout << '\n' << nega_el(array, size)<<std::endl;
	
	return 0;
}