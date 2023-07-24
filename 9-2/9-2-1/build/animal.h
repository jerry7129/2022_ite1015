#include<string>
using namespace std;
class Animal{
protected:
	string name;
	int age;
public:
	Animal(string _name, int _age);
	virtual ~Animal();
	virtual void printInfo();
};
class Zebra: public Animal{
	int numStripes;
public:
	Zebra(string _name, int _age, int _numstripes);
	~Zebra();
	virtual void printInfo();
};
class Cat: public Animal{
	string favoriteToy;
public:
	Cat(string _name, int _age, string _favoriteToy);
	~Cat();
	virtual void printInfo();
};
