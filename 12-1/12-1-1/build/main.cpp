#include<iostream>
#include<string>
using namespace std;

template <typename T>
void myswap(T& a, T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int i, j;
	cin >> i >> j;
	myswap<int>(i, j);
	cout << "After calling myswap(): "<<i<<' '<<j<<'\n';
	double x, y;
	cin >> x >> y;
	myswap<double>(x, y);
	cout << "After calling myswap(): "<<x<<' '<<y<<'\n';
	string s1, s2;
	cin >> s1 >> s2;
	myswap<string>(s1, s2);
	cout << "After calling myswap(): "<<s1<<' '<<s2<<'\n';

	return 0;
}
