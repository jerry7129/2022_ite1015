#include "shapes.h"
#include<vector>
#include<iostream>
using namespace std;

Shape::Shape(){};
Shape::Shape(int _x, int _y, int _wid, int _hei, char _brush, int canvas_width, int canvas_height){
	x=_x; y=_y; wid=_wid; hei=_hei; brush=_brush;
	width=canvas_width; height=canvas_height;
	for(int i=0; i<=height; i++){
		vector<char> v;
		for(int j=0; j<=width; j++){
			if(i==0 && j==0)v.push_back(' ');
			else if(i==0)v.push_back(j-1+'0');
			else if(j==0)v.push_back(i-1+'0');
			else v.push_back('.');
		}
		canvas.push_back(v);
	}
};
double Shape::GetArea(){
	if(hei==0){
		return (double)((2*wid+1)*(2*wid+1))/2;
	}
	else{
		return wid*hei;
	}
};
int Shape::GetPerimeter(){
	if(hei==0){
		return 4*(wid+1);
	}
	else{
		return 2*(wid+hei);
	}
};
void Shape::Draw(int canvas_width, int canvas_height){
	for(int i=0; i<=canvas_height; i++){
		for(int j=0; j<=canvas_width; j++){
			cout << canvas[i][j];			
		}
		cout <<'\n';
	}
};
Square::Square(int _x, int _y, int _wid, int _hei, char _brush, int n, int m):Shape(_x, _y, _wid, _hei, _brush, n, m){
	for(int i=1; i<=hei; i++){
		for(int j=1; j<=wid; j++){
			if(i+y<=height && j+x<=width)
				canvas[i+y][j+x]=brush;
		}
	}
}
Rectangle::Rectangle(int _x, int _y, int _wid, int _hei, char _brush, int n, int m):Shape(_x, _y, _wid, _hei, _brush, n, m){
	for(int i=1; i<=hei; i++){
		for(int j=1; j<=wid; j++){
			if(i+y<=height && j+x<=width)
				canvas[i+y][j+x]=brush;
		}
	}
}
Diamond::Diamond(int _x, int _y, int _wid, char _brush, int n, int m):Shape(_x, _y, _wid, 0, _brush, n, m){
	for(int i=0; i<=wid; i++){
		for(int j=0; j<2*i+1; j++){
			if(i+x+1<=height && j-x+y+1>0 && j-x+y+1<=width)
				canvas[i+y+1][j+x-i+1]=brush;
		}
	}
	for(int i=wid-1; i>=0; i--){
		for(int j=0; j<2*i+1; j++){
			if(2*wid-i+y+1<=height && j+x-i+1>0 && j+x-i+1<=width)
				canvas[2*wid-i+y+1][j+x-i+1]=brush;
		}
	}
}
