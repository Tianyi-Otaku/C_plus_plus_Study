#include<iostream>
struct CandyBar {
	std::string brand;
	float weight;
	int ka;
};

int main(void) {
	CandyBar snack = {"Mocha Munch",2.3f,350};
	//std::cout<<snack.brand<<snack.weight<<snack.ka<<std::endl;
	std::cout << "Ʒ��" <<snack.brand <<std::endl;
	std::cout << "����" << snack.weight << std::endl;
	std::cout << "��·��" << snack.ka << std::endl;




	return 0;
}