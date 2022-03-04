#include <iostream>

using namespace std;

class Circle {
	//접근 지정자
public:
	//맴버변수
	int radius;
	//맴버변수 원형만 선언
	Circle();
	Circle(int r);
	double getArea();
};

//Circle::Circle() : Circle(10){}		//위임 생성자 : 기본생성자 호출시, 10을 매개변수있는 생성자에게 전달
Circle::Circle() : radius(10) {}		//생성자 구현부분에 맴버변수 초기화 할수 있음
Circle::Circle(int r) {
	radius = r;		//멤버 변수인 반지름 초기화
	cout << "반지름이 " << radius << "인 원 생성 " << endl;
}

//클래스 구현부
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
	Circle donut;//기본 생성자 호출

	//생성자 만들지 않고 멤버변수 초기화 할경우
	//cout << "반지름 입력 >> ";
	//cin >> donut.radius;

	double donutArea = donut.getArea();
	cout << "도넛의 면적 = " << donutArea << endl;

	Circle pizza(15);		//매개변수 1개 있는 생성자가 호출됨

	//cout << "반지름 입력 >> ";
	//cin >> pizza.radius;

	double pizzaArea = pizza.getArea();
	cout << "피자의 면적 = " << pizzaArea << endl;

	Rect rect;
	rect.w = 5;
	rect.h = 9;
	int rectArea = rect.getArea();
	cout << "네모의 면적 = " << rectArea << endl;

}