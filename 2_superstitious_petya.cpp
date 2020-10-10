#include <iostream>


bool start_with(int number, int x) {
	
	while(number >= 10) {
		number /= 10;
	}

	return x == number % 10;
}

bool is_petya_hate_it(int number) {
	
	if(number % 4 == 0 && !(start_with(number, 4) || start_with(number, 5))) {
		return true;
	}

	if(number % 7 == 0 && !(start_with(number, 7) || start_with(number, 1))) {
		return true;
	}

	if(number % 9 == 0 && !(start_with(number, 9) || start_with(number, 8))) {
		return true;
	}
	
	return false;
}

int main() {
	
	int n;
	std::cin >> n;
	int array[n];

	for(int i = 0; i < n; i++) {
		std::cin >> array[i];
	}

	bool fine = true;
	for(int i = 0; i < n; i++) {
		
		if(is_petya_hate_it(array[i])) {
			fine = false;
			std::cout << array[i] << "\n";
		}
	}

	if(fine) {
		std::cout << 0 << std::endl;
	}

	return 0;
}
