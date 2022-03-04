#include "UpAndDownGame.h"
#include "Person.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void UpAndDownGame::init() {	// �����ڵ忡 ���� ���� ����
	srand((unsigned)time(0));
	int n = rand();
	answer = n % 100;	// ����(answer) = 0~99������ ��
}

void UpAndDownGame::msg() {
	cout << "������ " << bottom << "�� " << top << "���̿� �ֽ��ϴ�." << endl;
}

bool UpAndDownGame::check(int a) { //��ȿ���ڸ� �Է��� ������, �������� �Ǵ�
	if (a<bottom || a>top)		// -(����)�� �Է��߰ų� 99���� ū�� �Է��ϸ� false�� ��ȯ
		return false;
	if (a == answer)			// a:5   answer=9
		return true;
	else if (a < answer)		// 5<9
		bottom = a;				// bottom=5
	else
		top = a;				// top=17
	return false;
}

// �̸����� ��ü�迭 �ʱ�ȭ - ������� - msg��� - �������� �Ǵ�
void UpAndDownGame::run() {	
	// ��ü�迭 ����
	Person p[2] = { Person("������"), Person("�̼���") };

	init();		// ���� ����
	int i = 0;	// ��ü�迭 ÷��

	while (true) {
		msg();
		// if( ��ü�迭.go() )	// go() ������ check()�� ȣ��
		if (p[i].go()) {
			// true�� ��ȯ�Ǹ� �̸� ��� - ���ѹݺ� ����
			cout << p[i].getName() << "�¸�~!!!" << endl;
			break;
		}
		// ������ ������ ���, ���� ������� �� �ѱ�
		i++;		// i=1		i=2		i=3		i=4
		i = i % 2;	// i=1		i=0		i=1		i=0
	}
	


}