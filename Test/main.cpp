#include<iostream>
#include<string>
#include<vector>
using namespace std;
int isAangram(string& s, int i, int j);
int main(void) {
	string s = "caacabc";
	int len = 1;
	int start = 0;
	for (int i = 0; i < s.size(); i++) {
		int current = 0;
		//����
		current = isAangram(s, i, i);
		if(len<current){
			len = current;
			start = i;
		}
		//ż��
		if(i<s.size()-1)
		current = isAangram(s, i, i+1);
		if (len < current) {
			len = current;
			start = i;
		}
		
	}
	start -= (len - 1) / 2;
	s.substr(start,len);
	std::cout<< s.substr(start, len);
	return 1;
}
//�������
int isAangram(string &s,int i,int j) {
	if (i < 0 || j >= s.size()) return j - i - 1;//���ص��ǳ��� -2 +1
	if (j == i) return isAangram(s, i - 1, j + 1);//Ϊ1ʱ
	if (j - i == 1) return isAangram(s, i - 1, j + 1);//Ϊ2ʱ
	if(s[i]==s[j]) return isAangram(s, i - 1, j + 1);//��ȷʱ
	if(s[i]!=s[j]) return j - i - 1;//���ص��ǳ��� -2 +1
}