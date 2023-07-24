#include "clock_time.h"
class Clock{
protected:
	ClockTime _clockTime;
	double _driftPerSecond;
	double _totalDrift = 0;
public:
	Clock(int hour, int minute, int second, double driftPerSecond);
	virtual ~Clock();
	void reset();
	void tick();
	virtual void displayTime() = 0;
};


class NaturalClock: public Clock{
public:
	NaturalClock(int hour, int minute, int second, double dirftPerSecond);
	virtual ~NaturalClock();
	virtual void displayTime() = 0;
};
class SudialClock: public NaturalClock{
public:
	SudialClock(int hour, int minute, int second);
	virtual void displayTime();
};


class MechanicalClock: public Clock{
public:
	MechanicalClock(int hour, int minute, int second, double dirftPerSecond);
	virtual ~MechanicalClock();
	virtual void displayTime() = 0;
};
class CuckooClock: public MechanicalClock{
public:
	CuckooClock(int hour, int minute, int second);
	virtual void displayTime();
};
class GrandFatherClock: public MechanicalClock{
public:
	GrandFatherClock(int hour, int minute, int second);
	virtual void displayTime();
};


class DigitalClock: public Clock{
public:
	DigitalClock(int hour, int minute, int second, double dirftPerSecond);
	virtual ~DigitalClock();
	virtual void displayTime() = 0;
};
class WristClock: public DigitalClock{
public:
	WristClock(int hour, int minute, int second);
	virtual void displayTime();
};


class QuantumClock: public Clock{
public:
	QuantumClock(int hour, int minute, int second, double dirftPerSecond);
	virtual ~QuantumClock();
	virtual void displayTime() = 0;
};
class AtomicClock: public QuantumClock{
public:
	AtomicClock(int hour, int minute, int second);
	virtual void displayTime();
};
