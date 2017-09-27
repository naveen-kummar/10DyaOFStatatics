#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <numeric>
using namespace std;
float GetMedian(vector<float> numbers);

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int inputSize = 0;
	vector<float> numbers;
	vector<float> weights;

	cin >> inputSize;

	int TempCount = inputSize;
	while (TempCount--)
	{
		float num = 0;
		cin >> num;
		numbers.emplace_back(num);
	}

	TempCount = inputSize;
	while (TempCount--)
	{
		float num = 0;
		cin >> num;
		weights.emplace_back(num);
	}

	float WeightedSum = 0.0;
	int index = 0;

	for (auto num : numbers)
	{
		WeightedSum += num * weights[index++];
	}

	int TotalWeights = std::accumulate(std::begin(weights), std::end(weights), 0.0);

	cout.setf(ios::fixed);
	cout << std::setprecision(1) << WeightedSum / TotalWeights << endl;

	return 0;
}
