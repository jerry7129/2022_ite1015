#include<iostream>
#include<vector>
#include<string>
using namespace std;
class B 
{
public:
    virtual ~B() {}
};
class C : public B
{
public:
    void test_C() { std::cout << "C::test_C()" << std::endl; }
};
class D : public B
{
public:
    void test_D() { std::cout << "D::test_D()" << std::endl; }
};

int main()
{
	vector<B*> arr;
	string command, s="";
	cin >> command;
	while(command != "0"){
		s += command;
		cin >> command;
	}
	for(int i=0; i<s.size(); i++){
		if(s[i]=='C'){
			B* c = new C;
			arr.push_back(c);
		}
		else if(s[i]=='D'){
			B* d = new D;
			arr.push_back(d);
		}
	}
	for(int i=0; i<s.size(); i++){
		if(s[i]=='C'){
			(*dynamic_cast<C*>(arr[i])).test_C();
		}
		else if(s[i]=='D'){
			(*dynamic_cast<D*>(arr[i])).test_D();
		}
		delete arr[i];
	}
	return 0;
}
