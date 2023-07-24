#include "clocks.h"
#include<iostream>
using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond):
	_driftPerSecond(driftPerSecond){_clockTime.setTime(hour, minute, second, 1);}
Clock::~Clock(){}
void Clock::reset(){ _clockTime.reset(); }
void Clock::tick(){
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
}

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond):
	Clock(hour, minute, second, driftPerSecond){}
NaturalClock::~NaturalClock(){}

SudialClock::SudialClock(int hour, int minute, int second):NaturalClock(hour, minute, second, 0.0){}
void SudialClock::displayTime(){
	cout << "SudialClock ";
	_clockTime.display();
	cout << ", total drift: "<<_totalDrift<<'\n';
}

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond):
	Clock(hour, minute, second, driftPerSecond){}
MechanicalClock::~MechanicalClock(){}

CuckooClock::CuckooClock(int hour, int minute, int second):MechanicalClock(hour, minute, second, 0.0){}
void CuckooClock::displayTime(){
	cout << "CuckooClock ";
	_clockTime.display();
	cout << ", total drift: "<<_totalDrift<<'\n';
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second):
	MechanicalClock(hour, minute, second, 0.000694444){}
void GrandFatherClock::displayTime(){
	cout << "GrandFatherClock ";
	_clockTime.display();
	cout << ", total drift: "<<_totalDrift<<'\n';
}


DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond):
	Clock(hour, minute, second, driftPerSecond){}
DigitalClock::~DigitalClock(){}

WristClock::WristClock(int hour, int minute, int second):
	DigitalClock(hour, minute, second, 0.000347222){}
void WristClock::displayTime(){
	cout << "WristClock ";
	_clockTime.display();
	cout << ", total drift: "<<_totalDrift<<'\n';
}


QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond):
	Clock(hour, minute, second, driftPerSecond){}
QuantumClock::~QuantumClock(){}

AtomicClock::AtomicClock(int hour, int minute, int second):
	QuantumClock(hour, minute, second, 0.000034722){}
void AtomicClock::displayTime(){
	cout << "AtomicClock ";
	_clockTime.display();
	cout << ", total drift: "<<_totalDrift<<'\n';
}
