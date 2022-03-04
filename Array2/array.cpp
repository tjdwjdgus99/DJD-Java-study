//5명의 점수를 입력받아 배열에 저장하고 최고점수와 최저점수, 평균 출력
#include <iostream>
using namespace std;

int main() {
	int intArray[5] = { 0 };
	double sum = 0.0;

	for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
		cout << i + 1 << "번째 학생의 국어 점수 입력 >> ";
		cin >> intArray[i];
		sum += intArray[i];
	}
	int max = 0;
	//최고 점수 Max = 0;			Max < intArray[0] 크면 , Max = intArray[0]	/	Max < intArray[1] 크면 , Max = intArray[1]
	for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
		if (max < intArray[i]) {
			max = intArray[i];
		}
	}
	int min = 999999;//반대로 최고 큰수로 최기화 해야함
	for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
		if (min > intArray[i]) {
			min = intArray[i];
		}
	}

	cout << "\n * 국어 점수중 최고 점수 = " << max;
	cout << "\n * 국어 점수중 최저 점수 = " << min;
	cout << "\n * 모든학생의 국어 평균 = " << sum /( sizeof(intArray) / sizeof(int) )<< endl;
}
