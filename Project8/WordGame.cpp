#include "Player.h"
#include "WordGame.h"
#include <iostream>
#include <string>

using namespace std;

/*��� �Լ�
bool createPlayeres();	//���� �ο����� 2�� �̻��̾�� ���� ���� ����
public:
	void run();
	WordGame(string startWord);
	~WordGame();
*/

WordGame::WordGame(string startWord) {		//���� �ܾ �Ű������� �޾� ����
	this->startWord = startWord;
	players = NULL;
}
WordGame::~WordGame() {
	delete[] players;
}

bool WordGame::createPlayeres() {		//�����ο�, ��ü�迭���� üũ
	int n;
	cout << "���� �ձ� ������ �����մϴ�." << endl;
	cout << "���ӿ� ������ �ο��� �� �� �Դϱ�? : ";
	cin >> n;//�ο��� �Է�

	//�ο����� 2�� �̻��̾�� ���������� ���� ���� ����
	if (n < 2) {
		cout << "���ӿ� �����ؾ� �� �ּ� �ο��� 2�Դϴ�." << endl;
		return false;
	}
	// �ο��� ��ŭPlayer ��ü �迭 ����
	nPlayers = n;	//��� ������ �ο��� ����
	players = new Player[n];
	if (!players) {
		return false;
	}

	//�� �������� �̸��� �Է¹޾� player�� �̸� ����
	string irum;
	for (int i = 0; i < nPlayers; i++) {
		cout << i + 1 << "��° �������� �̸��� ��ĭ���� �Է��ϼ���>>";
		cin >> irum;
		players[i].setName(irum);
	}
	return true;
}

void WordGame::run() {
	if (!createPlayeres()) {	//�����ڼ� 2�� �̸��̰ų�, ������ ������ ���
		return;
	}

	string lastWord = startWord;
	cout << endl << "���� �ܾ��" << lastWord << " �Դϴ�." << endl;

	int i = 0;		//������ 0���� ���� �����ϵ��� �ʱ�ȭ
	while (true) {
		string newWord = players[i].sayWord();		//������ >> ���찳
		if (!players[i].success(lastWord)) {
			cout << players[i].getName() << "�� �����ϴ�.";
			break;
		}
		i++;		//���� �����ڸ� ���� ����
		i %= nPlayers;		//�ٸ� ���� �߸� ����ġ�� �ʵ��� �����
		lastWord = newWord;
	}
}