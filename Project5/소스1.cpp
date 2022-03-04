#include "Account.h"

Account::Account(string name, int id, int bal) {
	this->name = name;
	this->id = id;
	balance = bal;
}
void Account::deposit(int money) {
	balance += money;
}
int Account::withdraw(int money) {
	//잔액 부족 체크 
	if (money > balance) {
		cout << "잔액부족!!" << endl;
		cout << "통장의 현재 잔액은 " << balance << "원 입니다." << endl;
		cout << "통장의 잔액을 모두 인출하시겠습니까?(예=1, 아니오=2) : ";
		int in = 0;
		cin >> in;
		if (in == 1) {
			money = balance;
			balance = 0;
		}
		else if (in == 2) {
			cout << "잔액부족." << endl;
		}
		else {
			cout << "잘못 누르셨습니다" << endl;
		}
	}
	else {		//안츌 가능한 경우  
		balance -= money;
	}
	return money;
}

int Account::quiry() {
	return balance;
}
string Account::getOwner() {
	return name;
}