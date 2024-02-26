#include<iostream>

struct CandyBar {
	std::string brand;
	float weight;
	int ka;
};


int main(void) {
	CandyBar snacks[3] = {
		{"Mocha Munch1",2.3f,350},
		{"Mocha Munch2",2.3f,350},
		{"Mocha Munch3",2.3f,350}
	};
	for (int i = 0; i < 3; i++) {
		std::cout << "品牌" << snacks[i].brand << std::endl;
		std::cout << "重量" << snacks[i].weight << std::endl;
		std::cout << "卡路里" << snacks[i].ka << std::endl;
	}
	return 0;
}