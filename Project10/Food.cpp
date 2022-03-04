#include <iostream>
#include <string>

using namespace std;

class Food {
	int calorie, price, weight;
	string name;
public:
	Food(int c=1, int p=0, int w=0, string n = "NoName") {
		calorie = c;
		price = p;
		weight = w;
		name = n;
	}
	void setCalorie(int c) {
		calorie = c;
	}
	void setPrice(int p) {
		price = p;
	}
	void setWeight(int w) {
		weight = w;
	}
	void setName(string n) {
		name = n;
	}
	int getCalorie() {
		return calorie;
	}
	int getPrice() {
		return price;
	}
	int getWeight() {
		return weight;
	}
	string getName() {
		return name;
	}
};

class Melon :public Food {
	string farm;

public:
	Melon(int c, int p, int w, string n, string f) : Food(c, p, w, n) {
		farm = f;
	}
	void setFarm(string f) {
		farm = f;
	}
	string getFarm() {
		return farm;
	}
	void show() {
		cout << endl << "��  �� : " << getName();
		cout << endl << "��  �� : " << getPrice();
		cout << endl << "Į�θ� : " << getCalorie();
		cout << endl << "��  �� : " << getWeight() << "g";
		cout << endl << "������ : " << getFarm();
	}
};

int main() {
	Melon* p[5];

	string name, farm;
	int price, weight, calorie;

	for (int i = 0; i < 5; i++) {
		p[i] = NULL;
	}

	cout << "==================5���� ���Ŀ� ���� ������ �Է��ϼ���================" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° ���� �̸� : ";
		cin >> name;
		cout << i + 1 << "��° ������ Į�θ�(������ �Է�) : ";
		cin >> calorie;
		cout << i + 1 << "��° ������ ��� ����(������ �Է�) : ";
		cin >> price;
		cout << i + 1 << "��° ������ ��� �߷�(������ �Է�) : ";
		cin >> weight;
		cout << i + 1 << "��° ������ ������ : ";
		cin >> farm;

		p[i] = new Melon(calorie, price, weight, name,farm); //������
	}

	//Į�θ��� ���� ū ����
	int max = p[0]->getCalorie();
	int max_pos = 0;

	for (int i = 0; i < 5; i++) {
		if (max = p[i]->getCalorie()) {
			max = p[i]->getCalorie();
			max_pos = i;
		}
	}

	//5���� ���Ŀ� ���� ��� ���� ����Ͽ� Ȯ��
	for (int i = 0; i < 5; i++) {
		p[i]->show();
		cout << endl;
	}

	cout << endl << "Į�θ��� ���� ���� ���� = " << p[max_pos]->getName() << endl;

	return 0;
}