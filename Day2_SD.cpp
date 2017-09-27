#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <algorithm>
#include <iomanip>
#include <numeric>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int inputSize = 0;
	vector<float> numbers;

	cin >> inputSize;
	int TempNum = inputSize;
	while (TempNum--)
	{
		float num = 0;
		cin >> num;
		numbers.emplace_back(num);
	}
	std::sort(std::begin(numbers), std::end(numbers));

	float mean = (std::accumulate(std::begin(numbers), std::end(numbers), 0.0)) / inputSize;
	//cout << "mean: " <<  mean << endl;
	float sqrdistance = 0.0;

	for (auto distance : numbers)
	{
		sqrdistance += pow((distance - mean), 2.0);
	}

	//cout << "sqrdistance: " <<  sqrdistance << endl;
	cout.setf(ios::fixed);
	cout << std::setprecision(1) << sqrt(sqrdistance / inputSize) << endl;

	return 0;
}
