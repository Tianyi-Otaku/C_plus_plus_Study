#include<iostream>
#include<string>
struct pizza{
	std::string name;
	float  diameter;
	float  weight;
};

void cinPizza(pizza& a);
void coutPizza(pizza& a);

int main(void) {
	pizza a;
	cinPizza(a);
	coutPizza(a);

}
void cinPizza(pizza& a) {
	using namespace std;
	cout << "������pizza����" << endl;
	getline(cin, a.name);
	cout << "������pizza��ֱ��" << endl;
	cin >> a.diameter;
	cout << "������pizza������" << endl;
	cin >> a.weight;

	
}
void coutPizza(pizza& a) {
	using namespace std;
	cout <<"������pizza��Ϣ���£�" << endl;
	cout << "pizza������Ϊ" <<a.name<< endl;
	cout << "pizza������Ϊ" << a.weight << endl;
	cout << "pizza��ֱ��Ϊ" << a.diameter << endl;
}
