#include <iostream>

using namespace std;
int main() {

	cout << "�迭�� ũ�⸦ �Է��ϼ���>> ";
	int n;
	cin >> n;

	if (n <= 0) {
		return 0;
	}
	int* p = new int[n];

	if (!p) {	//�� �޸𸮷� ���� �Ҵ� �������� ���
		cout << "�޸𸮰� �����մϴ�.. " << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "�Է��� ������ ����= " << sum << endl;
	cout << "�Է��� ���ڵ��� ��� = " << sum / n << endl;

	//�������� �Ҵ�޴� �޸� ��ȯ
	delete[] p;
}