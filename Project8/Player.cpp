#include "Player.h"
#include <iostream>
#include <string>

using namespace std;
/*
string sayWord();
bool success(string lastWord);
};
*/

string Player::sayWord() {		//강감찬 >> 지우개
	cout << name << " >> ";	//김유신 >> 개나리
	cin >> word;
	return word;
}

bool Player::success(string lastWord) {
	int lastindex = lastWord.length() - 2; //단어의 마지막 글자의 인덱스

	//참가자가 말한 첫들자와 이전사람이 말한 마지막 글자가 일치하는지 비교
	if (lastWord.at(lastindex) == word.at(0) && lastWord.at(lastindex + 1) == word.at(1)) {
		return true;
	}
	else {
		return false;
	}
}