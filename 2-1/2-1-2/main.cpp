#include<iostream>
using namespace std;

struct point{
	int first;
	int second;
};
void getScale2xPoint(struct point *p1, struct point *p2){
	p2->first = p1->first*2;
	p2->second = p1->second*2;
}
void swapPoints(struct point *p1, struct point *p2){
	int a;
	a=p1->first;
	p1->first = p2->first;
	p2->first = a;

	a=p1->second;
	p1->second = p2->second;
	p2->second = a;
}
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	struct point p1, p2;
	cin >> p1.first >> p1.second;
	cout <<"Calling getScale2xPint()"<<'\n';
	getScale2xPoint(&p1, &p2);
	cout <<"p1 : "<<p1.first<<' '<<p1.second<<'\n';
	cout <<"p2 : "<<p2.first<<' '<<p2.second<<'\n';
	
	cout<<"Calling swapPoint()"<<'\n';
	swapPoints(&p1, &p2);
	cout <<"p1 : "<<p1.first<<' '<<p1.second<<'\n';
	cout <<"p2 : "<<p2.first<<' '<<p2.second<<'\n';
}
