#include <iostream>

int main() {
	
	int a, b, c, d, answer;
	int teachers_favorite_number = 1024;
	int score = 5;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> answer;

	int x1 = b - a;
	int x2 = d / c;

	if(answer != x1) {
		score--;
	}

	if(answer != x2) {
		score--;
	}

	if(score == 3 && answer != teachers_favorite_number) {
	       score--;
	}	       

	std::cout << score << std::endl;

	return 0;

}
