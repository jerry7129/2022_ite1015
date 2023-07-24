#include<iostream>
using namespace std;

struct person{
	char name[11];
	int age;
};
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	struct person p[3];
	for(int i=0;i<3;i++){
		cin >> p[i].name;
		cin >> p[i].age;
	}
	
	for(int i=0;i<3;i++){
		cout <<"Name:"<<p[i].name<<", Age:"<<p[i].age<<'\n';
	}
	return 0;
}
