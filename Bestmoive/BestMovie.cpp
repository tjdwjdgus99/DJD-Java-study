#include <iostream>
#include <string>
//4���� ��ȭ ����� ������ �Է¹޾� �־��� ��ȭ�� �ְ��� ��ȭ ���� ����ϴ� ���α׷�
using namespace std

class Moive {

};

int main(){
	Movie mv[4]; //4���� ��ȭ ����� ������ �Է� �ޱ� ���� ��ü �迭
	
	cout << "�λ��� �� 4���� ��ȭ ����� ������ �Է��ϼ���" << '\n';

	for (int i = 0; i < 4; i++) {
		cout << i + 1 << "��° ��ȭ ���� �Է�>>";
		cin >> mv[i].title;
		cout << i + 1 << "��° ��ȭ ���� �Է�>>";
		cin >> mv[i].rate;
	}

	//�ְ� ��ȭ ����� �־ǿ� ���� �Է�
	Movie m;
	m.BestMoive(mv);
	m.WorstMovie(mv);

	system("pause");
	return 0;
}