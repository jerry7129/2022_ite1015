#include<iostream>
#include<vector>
#include<map>
#include<string>
#include "message.h"
using namespace std;
int main()
{
	MessageBook mb;
	string str, command, number, message;
	getline(cin, str);
	int cnt=0;
	for(int i=0; i<str.size(); i++){
		if(str[i] == ' ' && cnt <2){
			++cnt;
			continue;
		}
		if(cnt == 0)
			command += str[i];
		else if(cnt == 1)
			number += str[i];
		else message += str[i];
	}
	cnt = 0;

	while(command != "quit"){
		if(command == "add"){
			mb.AddMessage(stoi(number), message);
		}
		else if(command == "delete"){
			mb.DeleteMessage(stoi(number));
		}
		else if(command == "print"){
			cout << mb.GetMessage(stoi(number)) << '\n';
			cout <<'\n';
		}
		else if(command == "list"){
			vector<int> v = mb.GetNumbers();
			for(auto iter=v.begin(); iter!=v.end(); iter++){
				cout << *iter << ": "<< mb.GetMessage(*iter)<<'\n';
			}
		}

		str.clear(); command.clear(); number.clear(); message.clear();
		getline(cin, str);
		for(int i=0; i<str.size(); i++){
			if(str[i] == ' ' && cnt <2){
				++cnt;
				continue;
			}
			if(cnt == 0)
				command += str[i];
			else if(cnt == 1)
				number += str[i];
			else message += str[i];
			}
		cnt = 0;
	}
	return 0;
}
