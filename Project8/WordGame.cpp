#include "Player.h"
#include "WordGame.h"
#include <iostream>
#include <string>

using namespace std;

/*멤버 함수
bool createPlayeres();	//참가 인원수가 2명 이상이어야 게임 시작 가능
public:
	void run();
	WordGame(string startWord);
	~WordGame();
*/

WordGame::WordGame(string startWord) {		//시작 단어를 매개변수로 받아 저장
	this->startWord = startWord;
	players = NULL;
}
WordGame::~WordGame() {
	delete[] players;
}

bool WordGame::createPlayeres() {		//참가인원, 객체배열생성 체크
	int n;
	cout << "끝말 잇기 게임을 시작합니다." << endl;
	cout << "게임에 참가할 인원은 몇 명 입니까? : ";
	cin >> n;//인원수 입력

	//인원수가 2명 이상이어야 정상적으로 게임 진행 가능
	if (n < 2) {
		cout << "게임에 참가해야 할 최소 인원은 2입니다." << endl;
		return false;
	}
	// 인원수 만큼Player 객체 배열 생성
	nPlayers = n;	//멤버 변수에 인원수 저장
	players = new Player[n];
	if (!players) {
		return false;
	}

	//각 참가자의 이름을 입력받아 player에 이름 저장
	string irum;
	for (int i = 0; i < nPlayers; i++) {
		cout << i + 1 << "번째 참가자의 이름을 빈칸없이 입력하세요>>";
		cin >> irum;
		players[i].setName(irum);
	}
	return true;
}

void WordGame::run() {
	if (!createPlayeres()) {	//참가자수 2명 미만이거나, 오류가 생겼을 경우
		return;
	}

	string lastWord = startWord;
	cout << endl << "시작 단어는" << lastWord << " 입니다." << endl;

	int i = 0;		//참가자 0번반 부터 시작하도록 초기화
	while (true) {
		string newWord = players[i].sayWord();		//강감찬 >> 지우개
		if (!players[i].success(lastWord)) {
			cout << players[i].getName() << "이 졌습니다.";
			break;
		}
		i++;		//다음 참가자를 위해 증가
		i %= nPlayers;		//다른 방을 잘못 가르치지 않도록 만들기
		lastWord = newWord;
	}
}