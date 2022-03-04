#include <iostream>

using namespace std;
int main() {

	cout << "배열의 크기를 입력하세요>> ";
	int n;
	cin >> n;

	if (n <= 0) {
		return 0;
	}
	int* p = new int[n];

	if (!p) {	//힙 메모리로 부터 할당 실패했을 경우
		cout << "메모리가 부족합니다.. " << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수 입력: ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "입력한 정수의 총합= " << sum << endl;
	cout << "입력한 숫자들의 평균 = " << sum / n << endl;

	//동적으로 할당받는 메모리 반환
	delete[] p;
}