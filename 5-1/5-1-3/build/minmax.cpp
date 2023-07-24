#include<iostream>
using namespace std;
void getMinMax(int* a, int n, int& min, int& max){
	for(int i=1;i<n;i++){
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
}
