#include<iostream>
#include<vector>
using namespace std;

class A{
public:
	A(){};
	virtual ~A(){};
	virtual void test(){
		cout << "A::test()"<<'\n';
	};
};
class B: public A{
public:
	B(){};
	virtual ~B(){};
	virtual void test(){
		cout << "B::test()"<<'\n';
	}
};
class C: public B{
public:
	C(){};
	virtual ~C(){};
	virtual void test(){
		cout << "C::test()"<<'\n';
	}
};

int main()
{
	vector<A*> v;
	A* a = new A; A* b = new B; A* c = new C;
	v.push_back(a); v.push_back(b); v.push_back(c);
	for(auto iter = v.begin(); iter != v.end(); iter++){
		(*iter)->test();
	}
	return 0;
}
