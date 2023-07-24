#include<iostream>
#include "rect.h"
#include<string>
using namespace std;

int main()
{
	string command;
	cin >> command;
	while(command != "quit"){
		if(command == "nonsquare"){
			int n, m; cin >> n >> m;
			NonSquare NS(n, m);
			NS.print();
		}
		else if(command == "square"){
			int n; cin >> n;
			Square S(n);
			S.print();
		}
		cin >> command;
	}
	return 0;
}
