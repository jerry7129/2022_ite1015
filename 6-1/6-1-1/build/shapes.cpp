#include "shapes.h"
#include<iostream>
using namespace std;


void Circle::SetCircle(int x, int y, int r)
{
	X = x;
	Y = y;
	R = r;
}
void Circle::CreateCircle()
{
	double pi = 3.14;
	cout << "area: "<<R*R*pi<<", perimeter: "<<2*R*pi<<'\n';
}

void Rectangle::SetRectangle(int x1, int y1, int x2, int y2)
{
	X1 = x1;
	Y1 = y1;
	X2 = x2;
	Y2 = y2;
}
void Rectangle::CreateRectangle()
{
	cout << "area: "<<(X2-X1)*(Y1-Y2)<<", perimeter: "<< 2*(X2-X1)+2*(Y1-Y2)<<'\n';
}
