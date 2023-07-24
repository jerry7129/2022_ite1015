#include "my_vector.h"
#include<iostream>
using namespace std;

MyVector::MyVector(){
	length = 0;
	a = new double[length];
}
MyVector::MyVector(int length){
	this->length = length;
	a = new double[length];
}
MyVector::~MyVector(){
	length = 0;
	//delete[] a;
}

MyVector& MyVector::operator=(const MyVector& b){
	length = b.length;
	delete[] a;
	if( b.a != nullptr){
		a = new double[length];
		for(int i=0; i<length; i++){
			a[i] = b.a[i];
		}
	}
	return *this;
}
MyVector MyVector::operator+(const MyVector& b){
	MyVector tmp(length);
	for(int i=0; i<length; i++)
		tmp.a[i] = a[i] + b.a[i];
	return tmp;
}
MyVector MyVector::operator-(const MyVector& b){
	MyVector tmp(length);
	for(int i=0; i<length; i++)
		tmp.a[i] = a[i] - b.a[i];
	return tmp;
}
MyVector MyVector::operator-(const int b){
	MyVector tmp(length);
	for(int i=0; i<length; i++){
		tmp.a[i] = a[i] - b;
	}
	return tmp;
}
MyVector MyVector::operator+(const int b){
	MyVector tmp(length);
		for(int i=0; i<length; i++)
		tmp.a[i] = a[i] + b;
	return tmp;
}

std::ostream& operator<<(std::ostream& out, MyVector& b){
	for(int i=0; i<b.length; i++)
		out << b.a[i] << ' ';
	out <<'\n';
	return out;
}
std::istream& operator>>(std::istream& in, MyVector& b){
	for(int i=0; i<b.length; i++)
		in >> b.a[i];
	return in;
}
