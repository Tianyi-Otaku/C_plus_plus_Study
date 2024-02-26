#include<iostream>
#include<string>
int main(void) {
	char firstName[20];
	std::string lastName;
	std::cout<<"Enter your first Name:" << std::endl;
	std::cin >> firstName;
	std::cout<<"Enter your last Name:" << std::endl;
	std::cin >> lastName;
	std::cout << "Here's the information in a single string :"<<lastName<<","<<firstName << std::endl;



	return 0;
}