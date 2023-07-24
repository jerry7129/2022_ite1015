#include<iostream>
#include "sumdiff.h"

int main(int argc, char** argv)
{
	int a=*argv[1]-'0', b=*argv[2]-'0';
	getSumDiff(a, b);

	return 0;
}
