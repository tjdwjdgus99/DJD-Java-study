#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	//��� ����
	string name;
	string jumin;
	string gender;
	int age;

	Person();//�⺻������
	Person(string n, string j, string g);	//�Ű����� 3���� ���� ������
	~Person();	//�Ҹ��� 1��

	void setName(string n);
	void setJumin(string j);
	void setGender(string g);

	string getName();	// name�� ��ȯ�ϴ� �Լ�
	int getAge();		// age�� ��ȯ =>���̰�� 2021 - (1900 + �ֹι�ȣ ���ڸ� + 1 )

};

Person::Person() {
	name = "������";
	jumin = "991124";
	gender = "��";
}
Person::Person(string n, string j, string g) {
	name = n;
	jumin = j;
	gender = g;
}
Person::~Person() {

}
void Person::setName(string n) {
	name = n;
}
void Person::setJumin(string j) {
	jumin = j;
}
void Person::setGender(string g) {
	gender = g;
}

string Person::getName() {
	return name;	//�̸� ��ȯ
}
int Person::getAge() {
	string y = jumin.substr(0, 2);	//������ġ , ����
	int year = stoi(y);		//���������� ��ȯ
	age = 2021 - (1900 + year + 1);		//���̰��
	return age;		//���̹�ȯ
}

int main() {
	//��ü 2�� ����
	Person me;		//�⺻������
	cout << "�̸��Է� >> ";
	string name;
	cin >> name;
	cout << "�ֹι�ȣ �Է� >> ";
	string jumin;
	cin >> jumin;
	cout << "���� �Է�(��/��) >> ";
	string gender;
	cin >> gender;
	Person you(name, jumin, gender);		//�Ű����� 3���ִ� ������ ȣ��

	cout << me.getName() << "���� ���� = " << me.getAge() << "��" << endl;
	cout << you.getName() << "���� ���� = " << you.getAge() << "��" << endl;

	return 0;
}
