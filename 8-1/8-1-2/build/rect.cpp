#include<iostream>
#include "rect.h"
using namespace std;

Rectangle::Rectangle(int width, int height){
	_width = width;
	_height = height;
};
int Rectangle::getArea(){
	return _width * _height;
};
int Rectangle::getPerimeter(){
	return (_width + _height) * 2;
};
Square::Square(int width):Rectangle(width, width){};
void Square::print(){
	cout <<_width<<"x"<<_width<<" Square"<<'\n';
	cout <<"Area: "<<getArea()<<'\n';
	cout <<"Perimeter: "<<getPerimeter()<<'\n';
};
NonSquare::NonSquare(int width, int height):Rectangle(width, height){};
void NonSquare::print(){
	cout <<_width<<"x"<<_height<<" NonSqaure"<<'\n';
	cout <<"Area: "<<getArea()<<'\n';
	cout <<"Perimeter: "<<getPerimeter()<<'\n';
};
