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
		//奇数
		current = isAangram(s, i, i);
		if(len<current){
			len = current;
			start = i;
		}
		//偶数
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
//解题过程
int isAangram(string &s,int i,int j) {
	if (i < 0 || j >= s.size()) return j - i - 1;//返回的是长度 -2 +1
	if (j == i) return isAangram(s, i - 1, j + 1);//为1时
	if (j - i == 1) return isAangram(s, i - 1, j + 1);//为2时
	if(s[i]==s[j]) return isAangram(s, i - 1, j + 1);//正确时
	if(s[i]!=s[j]) return j - i - 1;//返回的是长度 -2 +1
}