#include <string>

using namespace std;

class Player;
class WordGame {
	//��� ����
	string startWord;
	int nPlayers;	//���� ���� �ο���
	Player* players;
	bool createPlayeres();		//	���� �ο����� 2�� �̻��̾�� ���� ���� ����
	//��� �Լ�
public:
	void run();
	WordGame(string startWord);
	~WordGame();
};