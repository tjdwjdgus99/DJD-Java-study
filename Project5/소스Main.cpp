#include "Account.h"

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
	cout << a.getOwner() << "�� ������ �ݾ��� " << m << "�� �Դϴ�." << endl;
	cout << a.getOwner() << "�ǰ����� ���� �ܾ��� " << a.quiry() << "�� �Դϴ�." << endl;

	return 0;
}