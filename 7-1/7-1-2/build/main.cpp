#include<iostream>
#include<vector>
#include<string>
#include "intset.h"
using namespace std;

int main()
{
	IntegerSet IS;
	string command;
	int n;
	cin >> command;
	while(command != "quit"){
		cin >> n;
		if(command == "add"){
			IS.AddNumber(n);
			vector<int> v = IS.GetAll();
			for(auto i = v.begin(); i != v.end(); i++)
				cout << *i <<' ';
			cout << '\n';
		}
		else if(command == "del"){
			IS.DeleteNumber(n);
			vector<int> v = IS.GetAll();
			for(auto i = v.begin(); i != v.end(); i++)
				cout << *i <<' ';
			cout << '\n';
		}
		else if(command == "get"){
			cout << IS.GetItem(n) <<'\n';
		}
		cin >> command;
	}
}
