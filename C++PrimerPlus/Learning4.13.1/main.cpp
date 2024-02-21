#include<iostream>
#include<string>
int main(void) {
	std::string firstName;
	std::string lastName;
	std::cout << "What is your first name?";
	std::getline(std::cin, firstName);
	std::cout << "What is your last name?";
	std::getline(std::cin, lastName);
	char x;
	std::cout << "What letter grade do you deserve?";
	std::cin >> x;
	int age;
	std::cout << "What is your age£¿";
	std::cin >> age;
	std::cout << "Name:" << firstName + lastName << std::endl;
	std::cout << "Grade:"<<char(x+1) << std::endl;
	std::cout << "Age:"<<age << std::endl;
	
	return 0;
}