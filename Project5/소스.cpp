#include <iostream>
#include <string>

using namespace std;

//�������� 3�� Account Ŭ����

/*
class Account {
	string name;
	int id;
	int balance;

public:
	Account(string name, int id, int bal);
	void deposit(int money);//�Ա�  
	int withdraw(int money);//���  
	int quiry();		//�ܾ� ��ȸ  
	string getOwner();	//���� ���� �̸� ��ȯ �Լ�  
};

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

int main() {
	string name = "";
	cout << "���� ������ �̸��� �Է��ϼ���>>";
	cin >> name;
	cout << "���� ��ȣ�� �Է��ϼ���.(��,123)>>";
	int id;
	cin >> id;

	Account a(name, id, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ��� " << a.quiry() << "�� �Դϴ�." << endl;
	cout << "������ �ݾ��� �Է��ϼ���>>";
	int money;
	cin >> money;
	//���� �ݾ� �Է� �ޱ�  
	int m = a.withdraw(money);
	cout << a.getOwner() << "�� ������ �ܾ��� " << m << "�� �Դϴ�." << endl;
	cout << a.getOwner() << "�ǰ����� ���� �ܾ��� " << a.quiry() << "�� �Դϴ�." << endl;

	return 0;
}
*/