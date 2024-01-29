#include<iostream>
int main(void) {
	using namespace std;
	cout << "Enter the world's population:";
	long long a;
	cin >> a;
	cout << "Enter the population of the us:";
	long long b;
	cin >> b;
	double x = double(b) / double(a) * 100;
	cout << "The population of the us is " << x << "% of the world population.";
	return 0;
}