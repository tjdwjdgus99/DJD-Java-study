/*
	[����2] ȭ�� �µ��� �Է¹޾� ���� �µ��� ��ȯ�ϴ� ���α׷�
*/

#include <iostream>
#include<cstring>

using namespace std;

int main() {
	int f_temp;		//ȭ�� �µ� ������ ������ ����
	double c_temp;//���� �µ� ������ �Ǽ��� ����

	cout << "ȭ�� �µ� �Է� : ";
	cin >> c_temp;

	c_temp = (5.0 / 9.0) * (f_temp - 32);	//ȭ���� ������ ��ȯ

	cout << "ȭ�� �µ�" << f_temp << "�� ���� �µ� " << c_temp << "�Դϴ�." << endl;

	return 0;
}