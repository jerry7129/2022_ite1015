#include "canvas.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	size_t n, m;
	cin >> n >> m;
	Canvas c(n, m);
	c.Print();
	vector<Shape*> v;
	vector<string> d;
	string command;
	cin >> command;
	while(command != "quit"){
		if(command == "add"){
			string s, dum;
			cin >> s;
			int x, y, w, h;
			char brush;
			if(s == "rect"){
				cin >> x >> y >> w >> h >> brush;
				Shape* rect = new Rectangle(x,y,w,h,brush);
				v.push_back(rect);
				dum="rect "+to_string(x)+" "+to_string(y)+" "+to_string(w)+" "+to_string(h)+" "+brush;
				d.push_back(dum);
			}
			else if(s == "tri_up"){
				cin >> x >> y >> w >> brush;
				Shape* tri_up = new UpTriangle(x,y,w,brush);
				v.push_back(tri_up);
				dum="rect "+to_string(x)+" "+to_string(y)+" "+to_string(w)+" "+brush;
				d.push_back(dum);
			}
			else if(s == "tri_down"){
				cin >> x >> y >> w >> brush;
				Shape* tri_down = new DownTriangle(x,y,w,brush);
				v.push_back(tri_down);
				dum="rect "+to_string(x)+" "+to_string(y)+" "+to_string(w)+" "+brush;
				d.push_back(dum);
			}
			else if(s == "diamond"){
				cin >> x >> y >> w >> brush;
				Shape* diamond = new Diamond(x,y,w,brush);
				v.push_back(diamond);
				dum="rect "+to_string(x)+" "+to_string(y)+" "+to_string(w)+" "+brush;
				d.push_back(dum);
			}
		}
		else if(command == "draw"){
			c.Clear();
			for(auto iter=v.begin(); iter!=v.end(); iter++)
				(*iter)->Draw(&c);
			c.Print();
		}
		else if(command == "dump"){
			for(int i=0; i<d.size(); i++)
				cout << i <<' '<<d[i]<<'\n';
		}
		else if(command == "delete"){
			int idx;
			cin >> idx;
			if(idx < v.size()){
				for(int i=idx+1; i<v.size(); i++){
					v[i-1]=v[i];
					d[i-1]=d[i];
				}
				v.pop_back();
				d.pop_back();
			}
		}
		else if(command == "resize"){
			cin >> n >> m;
			c.Resize(n, m);
		}
		cin >> command;
	}
}
