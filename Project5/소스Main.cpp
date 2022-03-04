#include "Account.h"

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
	cout << a.getOwner() << "의 인출한 금액은 " << m << "원 입니다." << endl;
	cout << a.getOwner() << "의계좌의 현재 잔액은 " << a.quiry() << "원 입니다." << endl;

	return 0;
}