#include<iostream>
#include<string>
#include<set>
#include "setfunc.h"
using namespace std;
int main()
{
	string command, str[2];
	char op;

	getline(cin, command);
	int idx=0, t = 0;
	for(int i=0; i<command.size(); i++){
		if(command[i] == '+' && idx == 1 && t == 0){
			op = command[i];
			t = 1;
		}
		else if(command[i] == '-' && idx == 1 && t == 0){
			op = command[i];
			t = 1;
		}
		else if(command[i] == '*' && idx == 1 && t == 0){
			op = command[i];
			t = 1;
		}
		else str[idx] += command[i];

		if(command[i] == '}') idx++;
	}
	idx=0, t=0;
	while(str[0].compare("0")){
		set<int> set0 = parseSet(str[0]);
		set<int> set1 = parseSet(str[1]);
		set<int> s;
	
		if(op == '+'){
			s = getUnion(set0, set1);
			printSet(s);
			s.clear();
		}
		else if(op == '-'){
			s = getDifference(set0, set1);
			printSet(s);
		}
		else if(op == '*'){
			s = getIntersection(set0, set1);
			printSet(s);
		}
		
		s.clear(); command.clear(); str[0].clear(); str[1].clear(); op = ' ';
		getline(cin, command);
		
		for(int i=0; i<command.size(); i++){
			if(command[i] == '+' && idx == 1 && t == 0){
				op = command[i];
				t = 1;
			}
			else if(command[i] == '-' && idx == 1 && t == 0){
				op = command[i];
				t = 1;
			}
			else if(command[i] == '*' && idx == 1 && t == 0){
				op = command[i];
				t = 1;
			}
			else str[idx] += command[i];
	
			if(command[i] == '}') idx++;
		}
		idx=0, t=0;
	}
	return 0;
}
