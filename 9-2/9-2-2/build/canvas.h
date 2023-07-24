#include<vector>
using namespace std;
class Canvas {
 public:
  Canvas(size_t row, size_t col);
  ~Canvas();

  // Change this canvas size to w x h. Preserve already existing shapes on the canvas.
  void Resize(size_t w, size_t h);

  // Dot with the brush at (x,y). If (x,y) is outside the canvas, just ignore it.
bool DrawPixel(int x, int y, char brush);

//Print out the canvas
void Print();

  // Erase all (initialize with '.')
void Clear();

size_t getRow();
size_t getCol();
 private:
	size_t _row, _col;
	vector<vector<char>> canvas;
};
class Shape {
 public:
  virtual ~Shape();
  virtual void Draw(Canvas* canvas) {};
 protected:
  // Define common properties of shapes
  int x, y, w, h;
  char brush;
};

class Rectangle : public Shape {
	/* Define required members */ 
public:
	Rectangle(int _x, int _y, int _w, int _h, char _brush){
		x=_x; y=_y; w=_w; h=_h; brush=_brush;
	}
	virtual void Draw(Canvas* canvas);
};
class UpTriangle : public Shape {
	/* Define required members */
public:

	UpTriangle(int _x, int _y, int _w, char _brush){
		x=_x; y=_y; w=_w; brush=_brush;
	}
	virtual void Draw(Canvas* canvas);
};
class DownTriangle : public Shape {
	/* Define required members */
public:
	DownTriangle(int _x, int _y, int _w, char _brush){
		x=_x; y=_y; w=_w; brush=_brush;
	}
	virtual void Draw(Canvas* canvas);
};
class Diamond : public Shape {
	/* Define required members */ 
public:
	Diamond(int _x, int _y, int _w, char _brush){
		x=_x; y=_y; w=_w; brush=_brush;
	}
	virtual void Draw(Canvas* canvas);
};
