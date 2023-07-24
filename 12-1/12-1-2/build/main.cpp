#include<iostream>
#include "my_container.h"
using namespace std;

int main()
{
	int size;
	cin >> size;
	MyContainer<int> a(size);
	cin >> a;
	cout << a;
	a.clear();
	
	cin >> size;
	MyContainer<double> b(size);
	cin >> b;
	cout << b;
	b.clear();

	cin >> size;
	MyContainer<string> c(size);
	cin >> c;
	cout << c;
	c.clear();
	return 0;
}
