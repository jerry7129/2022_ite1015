#include<iostream>
#include<vector>
#include "shape.h"
using namespace std;

int main()
{
	char command;
	cin >> command;
	vector<Shape*> v;
	while(command != '0'){
		double width, height;
		cin >> width >> height;
		if(command == 'r'){
			Shape* ptr = new Rectangle(width, height);
			v.push_back(ptr);
		}
		else if(command == 't'){
			Shape* ptr = new Triangle(width, height);
			v.push_back(ptr);
		}
		cin >> command;
	}
	for(auto iter = v.begin(); iter != v.end(); iter++)
		cout << (*iter)->getArea() <<'\n';
	return 0;
}
