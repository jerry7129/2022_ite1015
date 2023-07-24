#include<iostream>
#include<string>
#include "number.h"
using namespace std;
int main()
{
	Square S;
	Cube C;
	int n;
	string command;
	cin >> command;
	while(command != "quit"){
		cin >> n;
		S.setNumber(n);
		if(command == "number"){
			cout << "getNumber(): "<<S.getNumber()<<'\n';
		}
		else if(command == "square"){
			cout << "getNumber(): "<<S.getNumber()<<'\n';
			cout << "getSquare(): "<<S.getSquare()<<'\n';
		}
		else if(command == "cube"){
			C.setNumber(n);
			cout << "getNumber(): "<<S.getNumber()<<'\n';
			cout << "getSquare(): "<<S.getSquare()<<'\n';
			cout << "getCube(): "<<C.getCube()<<'\n';
		}
		cin >> command;
	}
	return 0;
}
