#include<iostream>
using namespace std;

void sort(int* a, int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	if(n<=0)return 0;

	int* a = new int[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, n);
	for(int i=0;i<n;i++){
		cout << a[i]<<' ';
	}
	cout <<'\n';
	delete a;
	return 0;
}
