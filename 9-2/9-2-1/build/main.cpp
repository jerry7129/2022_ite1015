#include "animal.h"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<Animal*> v;
	char command;
	cin >> command;
	while(command != '0'){
		string name;
		int age;
		if(command == 'z'){
			int Stripes;
			cin >> name >> age >> Stripes;
			Animal* a = new Zebra(name, age ,Stripes);
			v.push_back(a);
		}
		else if(command == 'c'){
			string favoriteToy;
			cin >> name >> age >> favoriteToy;
			Animal* a = new Cat(name, age, favoriteToy);
			v.push_back(a);
		}
		cin >> command;
	}
	for(int i=0; i<v.size(); i++){
		v[i]->printInfo();
	}
	for(int i=0; i<v.size(); i++){
		delete v[i];
	}
	return 0;
}
