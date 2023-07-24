#include<iostream>
using namespace std;
void magicSquare(int** arr, int n){
	int i=0, j=n/2, cnt = 1;
	int ci=i, cj=j;

	int** visit = new int*[n];
	for(int a=0;a<n;a++)
		visit[a]=new int[n];

	while(cnt <= n*n){
		if(cnt==1){
			arr[i][j]=cnt;
			++cnt;
			visit[i][j]=1;
			i--; j++;
		}
		if(i<0){
			i=n-1;
			continue;
		}
		if(j>=n){
			j=0;
			continue;
		}
		if(visit[i][j]==1){
			i=ci+1;
			j=cj;
			continue;
		}
		else{
			arr[i][j]=cnt;
			++cnt;
			visit[i][j]=1;
			ci=i; cj=j;
			i--; j++;
		}
	}

	for(int a=0;a<n;a++)
		delete[] visit[a];
	delete[] visit;
}
int main(){
	int n;
	cin >> n;
	int** arr = new int*[n];
	for(int i=0;i<n;i++)
		arr[i]=new int[n];
	magicSquare(arr, n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << arr[i][j]<<' ';
		}
		cout << '\n';
	}
	cout << '\n';

	for(int i=0;i<n;i++)
		delete[] arr[i];
	delete[] arr;

	return 0;
}
