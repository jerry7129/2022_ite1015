#include "accounts.h"

AccountManager::AccountManager()
{

}
bool AccountManager::Desposit(int id ,int money)
{
	member[id].Balance += money;
	return true;
};
bool AccountManager::Withdraw(int id, int money)
{
	if(member[id].Balance < money)return false;
	member[id].Balance -= money;
	return true;
};
bool AccountManager::Transfer(int id1, int id2, int money)
{
	if(member[id1].Balance < money)return false;
	member[id2].Balance += money;
	member[id1].Balance -= money;
	return true;
};
