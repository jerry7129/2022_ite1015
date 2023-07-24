#include<iostream>
#include<string>
#include<vector>
#include "shapes.h"
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	string command;
	cin >> command;
	while(command != "quit"){
		int x, y, wid, hei;
		char brush;
		if(command == "rect"){
			cin >> x >> y >> wid >> hei >> brush;
			Rectangle rec(x, y, wid, hei, brush, n, m);
			cout << "Area: "<<rec.GetArea()<<'\n';
			cout << "Perimeter: "<<rec.GetPerimeter()<<'\n';
			rec.Draw(n, m);
		}
		else if(command == "square"){
			cin >> x >> y >> wid >> brush;
			Square square(x, y, wid, wid, brush, n, m);
			cout << "Area: "<<square.GetArea()<<'\n';
			cout << "Perimeter: "<<square.GetPerimeter()<<'\n';
			square.Draw(n, m);
		}
		else if(command == "diamond"){
			cin >> x >> y >> wid >> brush;
			Diamond diamond(x, y, wid, brush, n ,m);
			cout << "Area: "<<diamond.GetArea()<<'\n';
			cout << "Perimeter: "<<diamond.GetPerimeter()<<'\n';
			diamond.Draw(n, m);
		}
		cin >> command;
	}
	return 0;
}
