#include<iostream>
#include "minmax.h"
using namespace std;
int main(int argc, char** argv){
	int n=argc-1;
	int* a = new int[n];
	for(int i=0;i<n;i++){
		a[i]=atoi(argv[i+1]);
	}
	int min=a[0], max=a[0];
	getMinMax(a, n, min, max);
	cout << "min: "<<min<<endl;
	cout << "max: "<<max<<endl;

	delete[] a;
	return 0;
}
