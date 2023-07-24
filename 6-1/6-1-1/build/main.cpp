#include<iostream>
#include "shapes.h"
using namespace std;

int main()
{
	cout << '\n' << "shape?"<<'\n';
	char a;
	cin >> a;
	while(a != 'Q'){
		if( a == 'C'){
			int x, y, z;
			cin >> x >> y >> z;
			Circle circle;
			circle.SetCircle(x, y, z);
			circle.CreateCircle();
		}
		else if( a == 'R'){
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			Rectangle rectangle;
			rectangle.SetRectangle(x1, y1, x2, y2);
			rectangle.CreateRectangle();
		}
		cout << '\n' << "shape?" << '\n';
		cin >> a;
	}

	return 0;
}
