#include<iostream>
#include<string>
using namespace std;
struct st {
	string name;
	int age;
};

int main(){
	int n;
	cin >> n;
	
	struct st s[n];

	for(int i=0;i<n;i++){
		cin >> s[i].name >> s[i].age;
	}
	for(int i=0;i<n;i++){
		cout <<"Nmae: "<<s[i].name<<", Age:"<<s[i].age<<'\n';
	}

	return 0;
}
