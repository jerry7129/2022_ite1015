#include<iostream>
#include "accounts.h"

int size = -1;
using namespace std;

int main()
{
	char command;
	AccountManager a;
	cout<<'\n'<<"Job?"<<'\n';
	cin >> command;
	while(command != 'Q')
	{
		if(command == 'N'){
			if(size >= 10){
				cout << "Failure: Create an account"<<'\n';
			}
			else {
				a.member[++size].ID = size;
				cout << "Account for user "<<a.member[size].ID<<" registered"<<'\n';
				cout << "Balance of user "<<a.member[size].ID<<": "<<a.member[size].Balance<<'\n';
			}
		}
		else if(command == 'D'){
			int id, money;
			cin >> id >> money;
			if(id > size||size == -1)cout << "Account does not exist"<<'\n';
			else if(!(a.Desposit(id, money))) cout << "Failure: Desposit to user "<<id <<' '<<money<<'\n';
			else {
				cout<<"Success: Desposit to user "<<id<<' '<<money<<'\n';
				cout<<"Balance of user "<<id<<": "<<a.member[id].Balance<<'\n';
			}
		}
		else if(command == 'W'){
			int id, money;
			cin >> id >> money;
			if(id > size||size == -1)cout << "Account does not exist"<<'\n';
			else if(!(a.Withdraw(id ,money))) {
				cout << "Failure: Withdraw to user "<<id <<' '<<money<<'\n';
				cout<< "Balance of user "<<id<<": "<<a.member[id].Balance<<'\n';
			}
			else{
				cout<< "Success: Withdraw to user "<<id<<' '<<money<<'\n';
				cout<< "Balance of user "<<id<<": "<<a.member[id].Balance<<'\n';
			}
		}
		else if(command == 'T'){
			int id1, id2, money;
			cin >> id1 >> id2 >> money;
			if(id1 > size || id2 > size || size == -1)cout << "Account does not exist"<<'\n';
			else if(!(a.Transfer(id1, id2 ,money))){
				cout <<"Failure: Transfer from user "<<id1<<" to user "<<id2<<' '<<money<<'\n';
				int tmp;
				if(id1 > id2){
					tmp = id1;
					id1 = id2;
					id2 = tmp;
				}
				cout <<"Balacne of user "<<id1<<": "<<a.member[id1].Balance<<'\n';
				cout <<"Balacne of user "<<id2<<": "<<a.member[id2].Balance<<'\n';
			}
			else{
				cout <<"Success: Transfer from user "<<id1<<" to user "<<id2<<' '<<money<<'\n';
				int tmp;
				if(id1 > id2){
					tmp = id1;
					id1 = id2;
					id2 = tmp;
				}
				cout <<"Balacne of user "<<id1<<": "<<a.member[id1].Balance<<'\n';
				cout <<"Balacne of user "<<id2<<": "<<a.member[id2].Balance<<'\n';
			}
		}
		cout << '\n'<<"Job?"<<'\n';
		cin >> command;
	}
}
