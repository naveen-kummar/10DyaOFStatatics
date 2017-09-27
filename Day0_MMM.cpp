#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <numeric>
using namespace std;
float GetMedian(vector<float> numbers);
float GetMode(vector<float> numbers);

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int inputSize = 0;
	vector<float> numbers;

	cin >> inputSize;
	while (inputSize--)
	{
		float num = 0;
		cin >> num;
		numbers.emplace_back(num);
	}
	std::sort(std::begin(numbers), std::end(numbers));

	cout.setf(ios::fixed);
	cout << std::setprecision(1) << std::accumulate(std::begin(numbers), std::end(numbers), 0.0) / numbers.size() << endl;

	cout << GetMedian(numbers) << endl;

	cout << std::setprecision(0) << GetMode(numbers);

	return 0;
}

float GetMedian(vector<float> numbers)
{
	float median = 0.0;

	int vectorSize = numbers.size();
	if (vectorSize % 2 == 0)
	{
		median = (numbers[(vectorSize / 2) - 1] + numbers[(vectorSize / 2)]) / 2.0;
	}
	else
	{
		median = (numbers[((vectorSize - 1) / 2)]) / 2.0;
	}

	return median;
}

float GetMode(vector<float> numbers)
{
	float mode = numbers[0];
	float prev = numbers[0] - 1;
	int CurrNumCount = 0;
	int modeCount = 0;

	for (auto num : numbers)
	{
		if (prev == num)
		{
			CurrNumCount++;
			if (CurrNumCount > modeCount)
			{
				modeCount = CurrNumCount;
				mode = num;
			}
		}
		else
		{
			CurrNumCount = 1;
		}

		prev = num;
	}

	return mode;
}
