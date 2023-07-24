#include<iostream>
using namespace std;

inline int max(int a, int b){return a>b?a:b;}
inline int min(int a, int b){return a<b?a:b;}

int main(){
	int n;
	cin >> n;
	int* arr = new int[n];
	int Max, Min;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(i==0){
			Max=arr[0];
			Min=arr[0];
		}
		else{
			Max=max(Max, arr[i]);
			Min=min(Min, arr[i]);
		}
	}
	cout << "min: "<<Min<<'\n';
	cout << "max: "<<Max<<'\n';
	
	delete[] arr;

	return 0;
}
