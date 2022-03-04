#pragma once
// 조건> static 멤버로만 구성하여 UpAndDownGame 클래스를 작성
class UpAndDownGame {
	// 멤버변수
	static int answer;		// 정답
	static int top;			// 유효 범위중 최소숫자 : 0
	static int bottom;		// 유효 범위중 최대숫자 : 99

	// 멤버함수
private:
	static void init();		// 랜덤한 수로 정답 발생하는 함수
	static void msg();		// 정답은 bottom ~ top 사이에 있다는 메시지 출력

public:
	static bool check(int a);	// 정답이라면 true를 반환, 그렇지않으면 false를 반환
	static void run();		// 이름으로 객체배열 초기화 - 정답생성 - msg출력 - 정답유무 판단
};