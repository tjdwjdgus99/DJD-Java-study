#include <iostream>
#include <string>

using namespace std;

//연습문제 3번 Account 클래스

/*
class Account {
	string name;
	int id;
	int balance;

public:
	Account(string name, int id, int bal);
	void deposit(int money);//입금  
	int withdraw(int money);//출금  
	int quiry();		//잔액 조회  
	string getOwner();	//계좌 주인 이름 반환 함수  
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

int main() {
	string name = "";
	cout << "계좌 주인의 이름을 입력하세요>>";
	cin >> name;
	cout << "계좌 번호를 입력하세요.(예,123)>>";
	int id;
	cin >> id;

	Account a(name, id, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.quiry() << "원 입니다." << endl;
	cout << "인출할 금액을 입력하세요>>";
	int money;
	cin >> money;
	//인출 금액 입력 받기  
	int m = a.withdraw(money);
	cout << a.getOwner() << "의 인출한 잔액은 " << m << "원 입니다." << endl;
	cout << a.getOwner() << "의계좌의 현재 잔액은 " << a.quiry() << "원 입니다." << endl;

	return 0;
}
*/