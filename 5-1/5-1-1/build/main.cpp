#include<iostream>
#include<string>
#include "myprint.h"

using namespace std;

int main(int argc, char** argv){
	string str=argv[1];
	int n=*argv[2]-'0';

	myprint(str, n);

	return 0;
}
