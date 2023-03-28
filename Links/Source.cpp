#include <iostream>

 int three_max(int F, int G, int X) {
	int max = 0, k = 0;

		max = F > G ? F : G;
		max = max > G ? max : G;
		
		int* const pmax = &max;
	    return *pmax;
}


int main() {

	int A = 3, B = 5, C = 4;
	
	std::cout << three_max(A, B, C) << ' ' << three_max(A, B, C) << ' ' << three_max(A, B, C);
	return 0;
}