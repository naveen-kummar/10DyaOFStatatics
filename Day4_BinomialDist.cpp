#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
float Factorrial(float PrevResult, float Number);
float ncrCombinations(float p, float n, float r);

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	float p = 1.09 / 2.09;
	float n = 6;
	float r = 3;



	cout.setf(ios::fixed);
	cout << std::setprecision(3) << ncrCombinations(p, n, r) << endl;

	return 0;
}

float ncrCombinations(float p, float n, float r)
{
	float q = (1 - p);

	float pf = 0;
	float prevResult = 1.00;

	for (r = 3; r <= n; r++)
	{
		pf += ((Factorrial(prevResult, n)) / ((Factorrial(prevResult, r)) * (Factorrial(prevResult, n - r)))) * (pow(p, r)) * (pow(q, (n - r)));
	}
}


float Factorrial(float PrevResult, float Number)
{
	if (Number)
	{
		PrevResult *= Number;
		return Factorrial(PrevResult, --Number);
	}
	else
	{
		return PrevResult;
	}

}
