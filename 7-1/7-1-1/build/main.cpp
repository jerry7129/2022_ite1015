#include<iostream>
#include<string>
#include<vector>
#include "sorted.h"
using namespace std;

int main()
{
	SortedArray sortn;
	string numbers; getline(cin, numbers);

	string s;
	for(int i=0;i<numbers.size();i++){
		if(isdigit(numbers[i])){
			s += numbers[i];
		}
		else if(numbers[i] == ' '){
			sortn.AddNumber(stoi(s));
			s.clear();
		}
		if(i == numbers.size() - 1){
			sortn.AddNumber(stoi(s));
			s.clear();
		}
	}
	
	string command; getline(cin, command);
	while(command.compare("quit")){
		if(command.compare("ascend")==0){
			vector<int> v = sortn.GetSortedAscending();
			for(auto i=v.begin(); i!=v.end(); i++){
				cout << *i << ' ';
			}
			cout << '\n';
		}
		else if(command.compare("descend")==0){
			vector<int> v = sortn.GetSortedDescending();
			for(auto i=v.begin(); i!=v.end(); i++){
				cout << *i << ' ';
			}
			cout << '\n';
		}
		else if(command.compare("max")==0){
			cout << sortn.GetMax() << '\n';
		}
		else if(command.compare("min")==0){
			cout << sortn.GetMin() << '\n';
		}
		else if(isdigit(command[0])){
			string s;
			for(int i=0; i<command.size();i++){
				if(isdigit(command[i]))
					s += command[i];
				else if(command[i]==' '){
					sortn.AddNumber(stoi(s));
					s.clear();
				}
				if(i == command.size() - 1){
					sortn.AddNumber(stoi(s));
					s.clear();
				}
			}
		}

		getline(cin, command);
	}
	return 0;
}
