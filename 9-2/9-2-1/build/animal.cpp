#include "animal.h"
#include<iostream>

Animal::Animal(string _name, int _age):name(_name), age(_age){}
void Animal::printInfo(){}
Animal::~Animal(){}

Zebra::Zebra(string _name, int _age, int _numStripes):Animal(_name, _age), numStripes(_numStripes){}
void Zebra::printInfo(){
	cout << "Zebra, Name: "<<name<<", Age: "<<age<<", Nmberof stripes: "<<numStripes<<'\n';
}
Zebra::~Zebra(){}

Cat::Cat(string _name, int _age, string _favoriteToy):Animal(_name, _age), favoriteToy(_favoriteToy){}
void Cat::printInfo(){
	cout << "Cat, Name: "<<name<<", Age: "<<age<<", FavoriteToy: "<<favoriteToy<<'\n';
}
Cat::~Cat(){}
