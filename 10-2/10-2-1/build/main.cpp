#include<iostream>
#include<vector>
#include "clocks.h"
using namespace std;

int main()
{
	int Time, time, h, m ,s;
	cin >> Time;
	time = Time;
	h = time / 3600;
	time -= h * 3600;
	m = time / 60;
	s = time - m * 60;
	cout << "Reported clock times after resetting:"<<'\n';
	Clock* SC = new SudialClock(h, m, s);
	Clock* CC = new CuckooClock(h, m, s);
	Clock* GF = new GrandFatherClock(h, m, s);
	Clock* WC = new WristClock(h, m, s);
	Clock* AC = new AtomicClock(h, m, s);
	vector<Clock*> v;
	v.push_back(SC); v.push_back(CC); v.push_back(GF); v.push_back(WC); v.push_back(AC);
	for(auto iter = v.begin(); iter != v.end(); iter++){
		(*iter)->reset();
		(*iter)->displayTime();
	}
	cout << '\n' << "Running the clocks ..." <<'\n'<<'\n';
	for(int i=0; i < Time; i++){
		for(auto iter = v.begin(); iter != v.end(); iter++)
			(*iter)->tick();
	}
	cout << "Reprted clock times after running:"<<'\n';
	for(auto iter = v.begin(); iter != v.end(); iter++){
		(*iter)->displayTime();
		delete *iter;
	}
	return 0;
}
