#pragma once
class Account
{
public:
	int ID, Balance=0;
};
class AccountManager
{	
public:
	Account member[10];
	AccountManager();
	int getMoney();
	void setMoney(int id, int money);
	bool Desposit(int id, int money);
	bool Withdraw(int id, int money);
	bool Transfer(int id1, int id2, int money);
};
