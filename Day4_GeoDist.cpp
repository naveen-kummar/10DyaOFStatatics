#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	float N = 0.0;
	float D = 0.0;
	int Nth = 0;

	cin >> N;
	cin >> D;
	cin >> Nth;

	float p = (N / D);
	float q = 1 - p;

	cout.setf(ios::fixed);
	cout << std::setprecision(3) << ((pow(q, (Nth - 1))) * (p)) << endl;

	return 0;
}
