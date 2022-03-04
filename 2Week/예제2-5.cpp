/*
	[예제 2-5] 암호 C++을 입력받으면 프로그램을 종료하는 예제
						- 암호가 틀리게 입력하면 반복
						-cstring 이용
*/

#include <iostream>
#include<cstring>

using namespace std;

int main() {
	// 암호 입력받아 저장시킬 문자배열 선언
	char pw[11];	//영문자 10개 이하 한글 5개 입력가능
	cout << "프로그램을 종료하려면 암호를 입력하세요 :  \n";

	// C++ 입력했는지 비교 - 잘못 입력시 무한 반복
	while (true) {
		cout << "암호 입력 >> ";
		cin >> pw;	//문자열로 저장

		if (strcmp(pw, "C++") == 0) {	//pw에 있는 문자열과 c++이 같으면 0을 리턴해 준다
			cout << "프로그램을 정상적으로 종료합니다... \n";
				break;	//무한반복문 종료
		}
		else {
			cout << "암호가 틀렸습니다. \n" << "다시입력해 주세요\n";
		}
	}


	return 0;
}

/*
	[문제2] 화씨 온도를 입력받아 섭씨 온도로 변환하는 프로그램
*/

int f_temp;		//화씨 온도 저장할 정수형 변수
double c_temp;//섭씨 온도 저장할 실수형 변수

cout << "화씨 온도 입력 : ";
cin >> c_temp;

c_temp = (5.0 / 9.0) * (f_temp - 32);	//화씨를 섭씨로 변환

cout << "화씨 온도" << f_temp << "는 섭씨 온도 " << c_temp << "입니다." << endl;

