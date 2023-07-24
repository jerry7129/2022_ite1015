#include "minimal_fighter.h"

MinimalFighter::MinimalFighter()
{
	mHp = 0;
	mPower = 0;
	mStatus = Invalid;
};
MinimalFighter::MinimalFighter(int _hp, int _power)
{
	mHp = _hp;
	mPower = _power;
	if(mHp > 0) mStatus = Alive;
	else mStatus = Dead;
};
int MinimalFighter::hp()
{
	return mHp;
};
int MinimalFighter::power()
{
	return mPower;
};
FighterStatus MinimalFighter::status()
{
	return mStatus;
};
void MinimalFighter::setHp(int _hp)
{
	mHp = _hp;
	if(mHp <= 0)mStatus = Dead;
};
void MinimalFighter::hit(MinimalFighter *_enemy)
{
	int eHp = _enemy->hp(), ePower = _enemy->power();
	FighterStatus eStatus = _enemy->status();

	mHp -= ePower;
	_enemy->setHp(eHp - mPower);
	
	if(mHp <= 0)mStatus = Dead;
};
void MinimalFighter::attack(MinimalFighter *_enemy)
{
	int eHp = _enemy->hp(), ePower = _enemy->power();
	FighterStatus eStatus = _enemy->status();

	eHp -= mPower;
	mPower = 0;
	_enemy->setHp( eHp );
};
void MinimalFighter::fight(MinimalFighter *_enemy)
{
	int eHp = _enemy->hp(), ePower = _enemy->power();
	FighterStatus eStatus = _enemy->status();
	while(mHp > 0 && eHp > 0){
		mHp -= ePower;
		eHp -= mPower;
	}
	_enemy->setHp( eHp );
	if(mHp <= 0)mStatus = Dead;
};
