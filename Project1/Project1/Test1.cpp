#include<iostream>

using namespace std;		//표준 입출력 라이브러리를 사용하기 위한 이름공간 사용 허가

//원의 면적 : 3.14 * 반지름 * 반지름
double area(int r) {
	return 3.14 * r * r;
}

int area(int width, int height) {
	return width * height;
}

int main() {
	int radius = 3;
	cout << "원의 반지름 = " << radius << "\n";
	cout << "원의 면적 = " << area(radius) << "\n";

	cout << "너비를 입력하세요 >>";

	int width;
	cin >> width;

	cout << "높이를 입력하세요 >>";

	int height;
	cin >> height;

	cout << "면적은" << area(width, height) << "\n";
}

 