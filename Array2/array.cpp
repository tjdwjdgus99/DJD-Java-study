//5���� ������ �Է¹޾� �迭�� �����ϰ� �ְ������� ��������, ��� ���
#include <iostream>
using namespace std;

int main() {
	int intArray[5] = { 0 };
	double sum = 0.0;

	for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
		cout << i + 1 << "��° �л��� ���� ���� �Է� >> ";
		cin >> intArray[i];
		sum += intArray[i];
	}
	int max = 0;
	//�ְ� ���� Max = 0;			Max < intArray[0] ũ�� , Max = intArray[0]	/	Max < intArray[1] ũ�� , Max = intArray[1]
	for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
		if (max < intArray[i]) {
			max = intArray[i];
		}
	}
	int min = 999999;//�ݴ�� �ְ� ū���� �ֱ�ȭ �ؾ���
	for (int i = 0; i < sizeof(intArray) / sizeof(int); i++) {
		if (min > intArray[i]) {
			min = intArray[i];
		}
	}

	cout << "\n * ���� ������ �ְ� ���� = " << max;
	cout << "\n * ���� ������ ���� ���� = " << min;
	cout << "\n * ����л��� ���� ��� = " << sum /( sizeof(intArray) / sizeof(int) )<< endl;
}
