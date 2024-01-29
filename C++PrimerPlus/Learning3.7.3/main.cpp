#include<iostream>
const int  TRANSITION = 60;
int main(void) {
	std::cout<<"Enter a latitude in degrees ,minutes,seconds:" << std::endl;
	std::cout << "First,enter the degrees:";
	int a;
	std::cin >> a;
	std::cout << "Next,enter the minutes of arc:";
	int b;
	std::cin >> b;
	std::cout << "Fially,enter the seconds of arc:";
	int c;
	std::cin >> c;
	double d = a + double(b) / TRANSITION + double(c) / TRANSITION / TRANSITION;
	std::cout << a << "degrees," << b << "minutes," << c << "seconds = " << d << "degrees." << std::endl;


	return 0;
}