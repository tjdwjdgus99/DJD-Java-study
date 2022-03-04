#include <iostream>

using namespace std;

class Circle {
	//���� ������
public:
	//�ɹ�����
	int radius;
	//�ɹ����� ������ ����
	Circle();
	Circle(int r);
	double getArea();
};

//Circle::Circle() : Circle(10){}		//���� ������ : �⺻������ ȣ���, 10�� �Ű������ִ� �����ڿ��� ����
Circle::Circle() : radius(10) {}		//������ �����κп� �ɹ����� �ʱ�ȭ �Ҽ� ����
Circle::Circle(int r) {
	radius = r;		//��� ������ ������ �ʱ�ȭ
	cout << "�������� " << radius << "�� �� ���� " << endl;
}

//Ŭ���� ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

class Rect {
public:
	int w, h;
	int getArea();
};

int Rect::getArea() {
	return w * h;
};

int main() {
	Circle donut;//�⺻ ������ ȣ��

	//������ ������ �ʰ� ������� �ʱ�ȭ �Ұ��
	//cout << "������ �Է� >> ";
	//cin >> donut.radius;

	double donutArea = donut.getArea();
	cout << "������ ���� = " << donutArea << endl;

	Circle pizza(15);		//�Ű����� 1�� �ִ� �����ڰ� ȣ���

	//cout << "������ �Է� >> ";
	//cin >> pizza.radius;

	double pizzaArea = pizza.getArea();
	cout << "������ ���� = " << pizzaArea << endl;

	Rect rect;
	rect.w = 5;
	rect.h = 9;
	int rectArea = rect.getArea();
	cout << "�׸��� ���� = " << rectArea << endl;

}