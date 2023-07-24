#include<iostream>
#include<string>
#include<vector>
using namespace std;

class A{
	int* memberA;
public:
	A(){};
	A(int argument){ 
		memberA = new int; 
		*memberA = argument;
		cout << "new memberA" <<'\n';
	}
	virtual ~A(){ 
		delete memberA;
		cout << "delete memberA" <<'\n'; 
	}
	virtual void print(){ cout <<"*memberA "<< *memberA <<'\n'; }
};
class B: public A{
	double* memberB;
public:
	B(){};
	B(double argument):A(1){
		memberB = new double;
		*memberB = argument;
		cout << "new memberB" <<'\n';
	}
	virtual ~B(){ 
		delete memberB;
		cout << "delete memberB" <<'\n'; 
	}
	void print(){ 
		A::print();
		cout <<"*memberB "<< *memberB <<'\n';
	}
};
class C: public B{
	string* memberC;
public:
	C(){};
	C(const string& argument):B(1.1){
		memberC = new string;
		*memberC = argument;
		cout << "new memberC" <<'\n';
	}
	virtual ~C(){ 
		delete memberC;
		cout << "delete memberC" <<'\n';
	}
	void print(){ 
		B::print();
		cout <<"*memberC "<< *memberC <<'\n'; 
	}
};
int main()
{
	int aa;
	double bb;
	string cc;
	cin >> aa >> bb >> cc;
	vector<A*> v;
	A* a = new A(aa); B* b = new B(bb); C* c = new C(cc);
	v.push_back(a); v.push_back(b); v.push_back(c);
	v[0]->print();
	v[1]->print();
	v[2]->print();
	delete a; delete b; delete c;
}
