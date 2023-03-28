  #include <iostream>

 void three_max(int &F, int &G, int &X) {
	     int max = F;

		max = F > G ? F : G;
		max = max > X ? max : X;		
}


int main() {

	int A = 3, B = 5, C = 4;
	
	std::cout << A << ' ' <<  B << ' ' <<  C;
	return 0;
}