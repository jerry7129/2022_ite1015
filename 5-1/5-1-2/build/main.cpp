#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int n=argc-1;
	string* str = new string[n];

	for(int i=0;i<n;i++){
		str[i]=argv[i+1];

	}
	for(int i=0;i<n;i+=2){
		cout << "Name:"<<str[i]<<", Score:"<<str[i+1]<<'\n';
	}
	delete[] str;

	return 0;
}
