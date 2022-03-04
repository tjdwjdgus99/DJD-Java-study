#include "UpAndDownGame.h"
#include "Person.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void UpAndDownGame::init() {	// 난수코드에 의해 정답 생성
	srand((unsigned)time(0));
	int n = rand();
	answer = n % 100;	// 정답(answer) = 0~99사이의 수
}

void UpAndDownGame::msg() {
	cout << "정답은 " << bottom << "과 " << top << "사이에 있습니다." << endl;
}

bool UpAndDownGame::check(int a) { //유효숫자를 입력한 것인지, 정답인지 판단
	if (a<bottom || a>top)		// -(음수)를 입력했거나 99보다 큰수 입력하면 false를 반환
		return false;
	if (a == answer)			// a:5   answer=9
		return true;
	else if (a < answer)		// 5<9
		bottom = a;				// bottom=5
	else
		top = a;				// top=17
	return false;
}

// 이름으로 객체배열 초기화 - 정답생성 - msg출력 - 정답유무 판단
void UpAndDownGame::run() {	
	// 객체배열 생성
	Person p[2] = { Person("강감찬"), Person("이순신") };

	init();		// 정답 생성
	int i = 0;	// 객체배열 첨자

	while (true) {
		msg();
		// if( 객체배열.go() )	// go() 내에서 check()를 호출
		if (p[i].go()) {
			// true가 반환되면 이름 출력 - 무한반복 종료
			cout << p[i].getName() << "승리~!!!" << endl;
			break;
		}
		// 정답을 못맞춘 경우, 다음 사람에게 턴 넘김
		i++;		// i=1		i=2		i=3		i=4
		i = i % 2;	// i=1		i=0		i=1		i=0
	}
	


}