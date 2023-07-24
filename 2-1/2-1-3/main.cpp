#include<iostream>
using namespace std;

void rotateLeft(int* pa, int* pb, int* pc){
		//Implement this function
		int a= *pa;
		*pa = *pb;
		*pb = *pc;
		*pc = a;
}

void rotateRight(int* pa, int* pb, int* pc){
		//Implement this function
	int a= *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = a;
}

int main(void){
		int a,b,c;
		cin >> a >> b >> c;
		cout << a<<":"<<b<<":"<<c<<'\n';
		int p;
		cin>>p;
		while(p==1 || p==2){
			if(p==1){
				rotateLeft(&a,&b,&c);
				cout << a<<":"<<b<<":"<<c<<'\n';
			}
			else if(p==2){
				rotateRight(&a,&b,&c);
				cout << a<<":"<<b<<":"<<c<<'\n';
			}
			cin>>p;
		}
		return 0;
}

