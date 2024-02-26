#include<iostream>
struct CandyBar {
	std::string brand;
	float weight;
	int ka;
};

int main(void) {
	CandyBar snack = {"Mocha Munch",2.3f,350};
	//std::cout<<snack.brand<<snack.weight<<snack.ka<<std::endl;
	std::cout << "品牌" <<snack.brand <<std::endl;
	std::cout << "重量" << snack.weight << std::endl;
	std::cout << "卡路里" << snack.ka << std::endl;




	return 0;
}