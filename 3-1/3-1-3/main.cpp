#include<iostream>
#include<string>

using namespace std;

int add(int a, int b){
	return a+b;
}
string add(string a, string b){
	return a+"-"+b;
}
int main(){
	int a,b;
	string str1, str2;
	cin >> a>>b>>str1>>str2;
	cout <<add(a,b)<<'\n'<<add(str1,str2)<<'\n';

	return 0;
}
