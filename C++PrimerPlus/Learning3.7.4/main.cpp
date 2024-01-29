#include<iostream>
int main(void) {
	using namespace std;
	long long x;
	cout << "Enter the number of seconds:";
	cin >> x;
	int second = x % 60;
	x = x / 60;
	int minute = x % 60;
	x = x / 60;
	int hour = x % 24;
	x = x / 24;
	int day = x;
	cout << day << "days," << hour << "hours," << minute << "minutes," << second << "seconds";
	return 0;
}