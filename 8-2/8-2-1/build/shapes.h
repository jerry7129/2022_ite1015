#include<vector>
using namespace std;

class Shape {
public:
	Shape();
   Shape(int _x, int _y, int _wid, int _hei, char _brush, int canvas_width, int canvas_height);

   double GetArea();
   int GetPerimeter();
   void Draw(int canvas_width, int canvas_height);
protected:
	int width, height;
	int x, y, wid, hei=0;
	char brush;
	vector<vector<char>> canvas;
                // Define common properties for all shape types
};

class Square: public Shape{
public:
	Square(int _x, int _y, int _wid, int _hei, char _brush, int n, int m);

};

class Rectangle: public Shape{
public:
	Rectangle(int _x, int _y, int _wid, int _hei, char _brush, int n, int m);
};

class Diamond: public Shape{
public:
	Diamond(int _x, int _y, int _wid, char _brush, int n, int m);

};
