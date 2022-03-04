/*
	[문제2] 화씨 온도를 입력받아 섭씨 온도로 변환하는 프로그램
*/

#include <iostream>
#include<cstring>

using namespace std;

int main() {
	int f_temp;		//화씨 온도 저장할 정수형 변수
	double c_temp;//섭씨 온도 저장할 실수형 변수

	cout << "화씨 온도 입력 : ";
	cin >> c_temp;

	c_temp = (5.0 / 9.0) * (f_temp - 32);	//화씨를 섭씨로 변환

	cout << "화씨 온도" << f_temp << "는 섭씨 온도 " << c_temp << "입니다." << endl;

	return 0;
}