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
	//�ܾ� ���� üũ 
	if (money > balance) {
		cout << "�ܾ׺���!!" << endl;
		cout << "������ ���� �ܾ��� " << balance << "�� �Դϴ�." << endl;
		cout << "������ �ܾ��� ��� �����Ͻðڽ��ϱ�?(��=1, �ƴϿ�=2) : ";
		int in = 0;
		cin >> in;
		if (in == 1) {
			money = balance;
			balance = 0;
		}
		else if (in == 2) {
			cout << "�ܾ׺���." << endl;
		}
		else {
			cout << "�߸� �����̽��ϴ�" << endl;
		}
	}
	else {		//���� ������ ���  
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