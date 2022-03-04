#include <iostream>
using namespace std;
	/*10개의 좌석을 갖는 극장 예약 시스템
		좌석 번호와 예약상태 출력, 잔여 좌석수, 예약번호 입력
		비여있는치 체크 = 좌석 번호의 값을 1로 변경, 잔여 좌석수 1감소
		99를 입력하거나 잔여 좌석수가 0과 같으면 프로그램 종료
	*/

int main() {
	int moive[10] = { 0 };		//극장 배열
	int count = 10, seat = 0;	//잔여 좌석수와 좌석번호
	while (true) {
		cout << "=============================================================================\n";
		for (int i = 0; i < (sizeof(moive) / sizeof(int)); i++) {
			cout << i << "\t";
		}
		cout << endl;
		for (int i = 0; i < (sizeof(moive) / sizeof(int)); i++) {
			cout << moive[i] << "\t";
		}
		cout << endl;
		cout << "=============================================================================\n";
		cout << "현재 잔여 좌석 수 >>" << count << endl;
		cout << " \n 몇 번째 자리를 예약하시겠습니까?(종료 = 99) : ";
		cin >> seat;

		if (seat == 99) {
			cout << "프로그램 종료" << endl;
			break;
		}
		//입력한 좌석이 예약 가능한 빈자리 인지 체크
		if (moive[seat] == 0) {
			moive[seat] = 1;
			count--;
			cout << endl << seat << "번 자리 예약 성공!!\n";
		}
		else {
			cout << endl << seat << "번은 예약 불가입니다!\n";
			cout << "다른 자리로 예약해 주세요" << endl;
		}
		if (count <= 0) {//매진된 경우
			cout << "모든자리가 매진되었습니다" << endl;
			break;
		}
		
	}
}