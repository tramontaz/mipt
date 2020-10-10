#include <iostream>
#include <cmath>

int main() {
	
	
	double values = 0.0;
	double squared_values = 0.0;
        double x;
	double count = 0.0;
	std::cin >> x;

	while(x != 0) {
		values += x;
		squared_values += x*x;
		count++;
		std::cin >> x;
	}

	double average = values / count;
	double sample_variance = (squared_values / count) - (average * average);

	average = round(1000.0 * average) / 1000.0;
	sample_variance = round(1000.0 * sample_variance) / 1000.0;

	std::cout.precision(1);
	std::cout << std::fixed << average << " " << sample_variance << std::endl;
	return 0;
}
