#include "canvas.h"
#include<iostream>
Canvas::Canvas(size_t row, size_t col):_row(row), _col(col){
	for(size_t i=0; i<=_col; i++){
		vector<char> v;
		for(size_t j=0; j<=_row; j++){
			if(i==0 && j==0)v.push_back(' ');
			else if(i==0)v.push_back((j-1)%10+'0');
			else if(j==0)v.push_back((i-1)%10+'0');
			else v.push_back('.');
		}
		canvas.push_back(v);
	}
};
void Canvas::Resize(size_t w, size_t h){
	for(size_t i=0; i<=_col; i++){
		for(size_t j=_row+1; j<=w; j++){
			if(i==0)canvas[i].push_back((j-1)%10+'0');
			else canvas[i].push_back('.');
		}		
	}
	for(size_t i=_col+1; i<=h; i++){
		vector<char> v;
		for(size_t j=0; j<=_row; j++){
			if(j==0)v.push_back((i-1)%10+'0');
			else v.push_back('.');
		}
		canvas.push_back(v);
	}
	for(size_t i=_col+1; i<=h; i++){
		for(size_t j=_row+1; j<=w; j++)
			canvas[i].push_back('.');
	}
	_row=w;
	_col=h;
};
bool Canvas::DrawPixel(int x, int y, char brush){
	if(x>0 && x<=_row && y>0 && y<=_col){
		canvas[y][x]=brush;
		return true;
	}
	return false;
}
void Canvas::Print(){
	for(int i=0; i<=_col; i++){
		for(int j=0; j<=_row; j++){
			cout<<canvas[i][j];
		}
		cout <<'\n';
	}
}
void Canvas::Clear(){
	for(int i=0; i<=_col; i++){
		for(int j=0; j<=_row; j++){
			if(i==0 || j==0)continue;
			canvas[i][j]='.';
		}
	}
}
size_t Canvas::getRow(){return _row;}
size_t Canvas::getCol(){return _col;}
Canvas::~Canvas(){}

Shape::~Shape(){}

void Rectangle::Draw(Canvas* canvas){
	
	for(int i=1; i<=h; i++){
		for(int j=1; j<=w; j++){
			if(i+y<=canvas->getCol() && j+x<=canvas->getRow())
				canvas->DrawPixel(j+x, i+y, brush);
		}
	}
}
void UpTriangle::Draw(Canvas* canvas){
	for(int i=0; i<=w-1; i++){
		for(int j=0; j<2*i+1; j++){
			if(i+y+1<=canvas->getCol() && j+x-i+1>0 && j+x-i+1<=canvas->getRow())
				canvas->DrawPixel(j+x-i+1, i+y+1, brush);
		}
	}
}
void DownTriangle::Draw(Canvas* canvas){
	for(int i=0; i<w; i++){
		for(int j=0; j<2*i+1; j++){
			if(y-i+1>0 && y-i+1<=canvas->getCol() && j+x-i+1>0 && j+x-i+1<=canvas->getRow())
				canvas->DrawPixel(j+x-i+1, y-i+1, brush);
		}
	}
}
void Diamond::Draw(Canvas* canvas){
	for(int i=0; i<=w; i++){
		for(int j=0; j<2*i+1; j++){
			if(i+y+1<=canvas->getCol() && j+x-i+1>0 && j+x-i+1<=canvas->getRow())
				canvas->DrawPixel(j+x-i+1, i+y+1, brush);
		}
	}
	for(int i=w-1; i>=0; i--){
		for(int j=0; j<2*i+1; j++){
			if(2*w-i+y+1<=canvas->getCol() && j+x-i+1>0 && j+x-i+1<=canvas->getRow())
				canvas->DrawPixel(j+x-i+1, 2*w-i+y+1, brush);
		}
	}
}
