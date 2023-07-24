#include "my_string.h"
#include<string>
#include<iostream>
MyString& MyString::operator=(const MyString& b){
	this->str = b.str;
	return *this;
}
MyString MyString::operator+(const MyString& b){
	MyString ms;
	ms.str = this->str + b.str;
	return ms;
}
MyString MyString::operator*(const int b){
	MyString ms;
	std::string s = this->str;
	for(int i=0; i<b; i++)
		ms.str += s;
	return ms;
}
std::ostream& operator<<(std::ostream& out, MyString& my_string){
	out << my_string.str <<'\n';
	return out;
}
std::istream& operator>>(std::istream& in, MyString& my_string){
	in >> my_string.str;
	return in;
}
