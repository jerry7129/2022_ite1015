#include "my_string2.h"
#include<string>
#include<iostream>
MyString2::MyString2(){}
MyString2::MyString2(const MyString2& b){
	str = b.str;
}
MyString2 MyString2::operator+(const MyString2& b){
	MyString2 ms;
	ms.str = this->str + b.str;
	return ms;
}
MyString2 MyString2::operator*(const int b){
	std::string s = this->str;
	MyString2 ms;
	for(int i=0; i<b; i++)
		ms.str += s;
	return ms;
}
std::ostream& operator<<(std::ostream& out, MyString2& my_string2){
	out << my_string2.str <<'\n';
	return out;
}
std::istream& operator>>(std::istream& in, MyString2& my_string2){
	in >> my_string2.str;
	return in;
}

