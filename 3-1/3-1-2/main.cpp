#include<iostream>
#include<string>

using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string str1, str2;
	cin >> str1 >> str2;
	str1 += str2;
	cout << str1 <<'\n';
	cout << str1[0] <<'\n';
	cout << str1[str1.length()-1]<<'\n';

	return 0;
}
