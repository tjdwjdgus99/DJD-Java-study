#include <string>

using namespace std;

class Player;
class WordGame {
	//멤버 변수
	string startWord;
	int nPlayers;	//게임 참가 인원수
	Player* players;
	bool createPlayeres();		//	참가 인원수가 2명 이상이어야 게임 시작 가능
	//멤버 함수
public:
	void run();
	WordGame(string startWord);
	~WordGame();
};