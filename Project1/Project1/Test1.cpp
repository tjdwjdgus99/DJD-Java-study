#include<iostream>

using namespace std;		//ǥ�� ����� ���̺귯���� ����ϱ� ���� �̸����� ��� �㰡

//���� ���� : 3.14 * ������ * ������
double area(int r) {
	return 3.14 * r * r;
}

int area(int width, int height) {
	return width * height;
}

int main() {
	int radius = 3;
	cout << "���� ������ = " << radius << "\n";
	cout << "���� ���� = " << area(radius) << "\n";

	cout << "�ʺ� �Է��ϼ��� >>";

	int width;
	cin >> width;

	cout << "���̸� �Է��ϼ��� >>";

	int height;
	cin >> height;

	cout << "������" << area(width, height) << "\n";
}

 