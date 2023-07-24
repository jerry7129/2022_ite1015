#include "my_vector.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	string command;
	cin >> command;
	if(command == "new"){
		int length;
		cin >> length;
		MyVector a(length), b(length);
		cout << "enter a"<<'\n';
		cin >> a;
		cout << "enter b"<<'\n';
		cin >> b;
		cin.ignore();
		getline(cin, command);
		while(command != "quit"){
			string com = command.substr(4);
			if(command[2] == '+'){
				if(command[0] == 'a'){
					if(command[4] == 'a'){
						MyVector aa;
						aa = a + a;
						cout << aa;
					}
					else if(command[4] == 'b'){
						MyVector aa;
						aa = a + b;
						cout << aa;
					}
					else if(stoi(com)){
						MyVector aa;
						aa = a + stoi(com);
						cout << aa;
					}
				}
				else if(command[0] == 'b'){	
					if(command[4] == 'a'){
						MyVector aa;
						aa = b + a;
						cout << aa;
					}
					else if(command[4] == 'b'){
						MyVector aa;
						aa = b + b;
						cout << aa;
					}
					else if(stoi(com)){
						MyVector aa;
						aa = b + stoi(com);
						cout << aa;
					}
				}
			}
			else if(command[2] == '-'){
				if(command[0] == 'a'){
					if(command[4] == 'a'){
						MyVector aa;
						aa = a - a;
						cout << aa;
					}
					else if(command[4] == 'b'){
						MyVector aa;
						aa = a - b;
						cout << aa;
					}
					else if(stoi(com)){
						MyVector aa;
						aa = a - stoi(com);
						cout << aa;
					}
				}
				else if(command[0] == 'b'){	
					if(command[4] == 'a'){
						MyVector aa;
						aa = b - a;
						cout << aa;
					}
					else if(command[4] == 'b'){
						MyVector aa;
						aa = b - b;
						cout << aa;
					}
					else if(stoi(com)){
						MyVector aa;
						aa = b - stoi(com);
						cout << aa;
					}
				}
			}
			getline(cin, command);
		}
	}
	return 0;
}
