#include<iostream>
#include<set>
#include<string>
#include "setfunc.h"
using namespace std;

set<int> parseSet(const string& str){
	set<int> s;
	string digit ="";
	for(int i=0; i<str.size(); i++){
		if(str[i] == ' ')
			digit.clear();
		else digit += str[i];
		if(atoi(digit.c_str())||digit.compare("0")==0){
			s.insert(stoi(digit));
		}
	}
	return s;
}
void printSet(const set<int>& set0){
	cout <<"{ ";
	for(auto iter=set0.begin(); iter!=set0.end(); iter++){
		cout << *iter <<' ';
	}
	cout <<'}'<<'\n';
}
set<int> getIntersection(const set<int>& set0, const set<int>& set1){
	set<int> s;
	if(set0.size()<=set1.size()){
		for(auto iter=set0.begin(); iter!=set0.end(); iter++){
			if(set1.find(*iter) != set1.end()) s.insert(*iter);
		}
	}
	else{
		for(auto iter=set1.begin(); iter!=set1.end(); iter++){
			if(set0.find(*iter) != set0.end()) s.insert(*iter);
		}
	}
	return s;
}
set<int> getUnion(const set<int>& set0, const set<int>& set1){
	set<int> s;
	for(auto iter=set0.begin(); iter!=set0.end(); iter++){
		if(s.find(*iter) == s.end()) s.insert(*iter);
	}
	for(auto iter=set1.begin(); iter!=set1.end(); iter++){
		if(s.find(*iter) == s.end()) s.insert(*iter);
	}
	return s;
}
set<int> getDifference(const set<int>& set0, const set<int>& set1){
	set<int> s;
	for(auto iter=set0.begin(); iter!=set0.end(); iter++){
		if(set1.find(*iter) == set1.end())
			s.insert(*iter);
	}
	return s;
}
