#include<iostream>
#include<string>
#include "my_string.h"
using namespace std;

int main()
{
	MyString a, b;
	string command;
	getline(cin, command);
	while(command != "quit"){
		if(command == "new"){
			cout << "eneter a"<<'\n';
			cin >> a;
			cout << "eneter b"<<'\n';
			cin >> b;
			cin.ignore();
		}
		else if(isdigit(command[4])){
			string integer = command.substr(4);
			if(command[0]='a'){
				MyString aaa;
				aaa = a*stoi(integer);
				cout << aaa;
			}
			else{
				MyString bbb;
				bbb = b*stoi(integer);
				cout << bbb;
			}
		}
		else if(command[2] == '+'){
			if(command[0]=='a' && command[4]=='a'){
				MyString a0;
				a0 = a+a;
				cout << a0;
			}
			else if(command[0]=='a' && command[4]=='b'){
				MyString a1;
				a1 = a+b;
				cout << a1;
			}
			if(command[0]=='b' && command[4]=='a'){
				MyString a2;
				a2 = b+a;
				cout << a2;
			}
			if(command[0]=='b' && command[4]=='b'){
				MyString a3;
				a3 = b+b;
				cout << a3;
			}
		}
		getline(cin, command);
	}
}
