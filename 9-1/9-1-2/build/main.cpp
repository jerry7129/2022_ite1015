#include<iostream>

#include<vector>
#include<string>
using namespace std;

class A{
public:
	A(){};
	virtual ~A(){};
	virtual string getTypeInfo(){ return "This is an instance of class A"; }
};
class B: public A{
public:
	B(){};
	virtual ~B(){};
	virtual string getTypeInfo(){ return "This is an instance of class B"; }
};
class C: public B{
public:
	C(){};
	virtual ~C(){};
	virtual string getTypeInfo(){ return "This is an instance of class C"; }
};

void printObjectTypeInfo1(A* object){
	cout << object->getTypeInfo() << '\n';
}
void printObjectTypeInfo2(A& object){
	cout << object.getTypeInfo() << '\n';
}

int main()
{
	vector<A*> v;
	A* a = new A; A* b = new B; A* c = new C;
	v.push_back(a); v.push_back(b); v.push_back(c);
	for(int i=0; i<3; i++){
		printObjectTypeInfo1(v[i]);
		printObjectTypeInfo2(*v[i]);
	}
	return 0;
}

